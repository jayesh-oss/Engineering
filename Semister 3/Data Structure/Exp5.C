
#include<stdio.h>
#include<conio.h>
#define SIZE 10
int queue [SIZE];
int f=1,r=1;
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
  printf("1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n");
  printf("Enter your choise\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter element");
	 scanf("%d",&val);
	 enqueue(val);
	 break;

   case 2:dequeue();
	 break;

   case 3:display();
	 break;

   case 4:exit(0);
	 break;
   default:printf("Invail choise\n");
  }
 }
 while(ch!=4);
 getch();
 return(0);
}

void enqueue(int no)
{
 if((f==r+1)||(f==0 && r==SIZE-1))
 {
  printf("Overflow\n");
 }
 else
 {
  if(f==1)
  f=0;
  r=(r+1)%SIZE;
  queue[r]=no;
 }
}

void dequeue()
{
 int no;
 if(f==-1)
 printf("Underflow\n");
 else
 {
  no=queue[f];
  if(f==r)
  {
   f=-1;
   r=-1;
  }
  else
  f=(f+1)%SIZE;
  printf("Delete elements %d\n",no);
 }
}

void display()
{
 int i;
 if(f==-1)
 printf("Queue is empty\n");
 else
 {
  printf("Front->%d",f);
  printf("Element->");
  for(i=f;i!=r;i=(i+1)%SIZE)
  printf("%d\t",queue[i]);
  printf("rear=%d\n",r);
 }
}