#include<conio.h>
#include<stdio.h>
#define MAX 10
int queue[MAX];
int f=-1,r=-1;
void enqueue();
void dequeue();
void display();
int main()
{
 int ch,val;
 clrscr();
 do
 {
  printf("Queue Operations\n");
  printf("1:Enqueue\n 2:Dequeue\n 3:Display\n 4:Exit\n");
  printf("Enter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:enqueue();
   break;
   case 2:dequeue();
   break;
   case 3:display();
   break;
   case 4:exit(0);
   default:
   printf("Invaild choice\n");
  }
 }
 while(ch!=4);
 return(0);
}
void enqueue()
{
 int no;
 printf("Enter element\n");
 scanf("%d",&no);
 if(r==MAX-1)
 printf("Overflow\n");
 else
 {
  if(f==-1&&r==-1)
  f=r=0;
  else
  r++;
  queue[r]=no;
 }
}
void dequeue()
{
 if(f==-1||f>r)
 {
  printf("Underflow\n");
 }
 else
 {
  printf("Deleted element %d\n",queue[f]);
  f++;
  if(f>r)
  f==-1;
 }
}
void display()
{
 int i;
 if(f==-1||f>r)
 printf("Underflow");
 else
 {
  for(i=f;i<r;i++)
  printf("%d\t",queue[1]);
 }
}

