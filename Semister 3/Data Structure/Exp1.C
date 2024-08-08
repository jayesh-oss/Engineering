#include<stdio.h>
#include<conio.h>
#define SIZE 5
int top=-1,stk[SIZE];
void push();
void pop();
void display();
void main()
{
 int ch;
 do
 {
  printf("...stack opertion...");
  printf("1:Push\n 2:Pop\n 3:display\n 4:Exit");
  printf("Enter your choice:\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:push();
   break;
   case 2:pop();
   break;
   case 3:display();
   break;
   case 4:exit(0);
   default:
   printf("Invalid choice");
  }
 }
 while(ch!=4);
 getch();
}
void push()
{
 int x;
 if(top==SIZE-1)
 printf("Overflow");
 else
 {
  printf("Enter Elements");
  scanf("%d",&x);
  top++;
  stk[top]=x;
 }
}
void pop()
{
 if(top==-1)
 printf("Underflow");
 else
 printf("pop element is:%d",stk[top]);
 top--;
}
void display()
{
 int i;
 if(top==-1)
 printf("underflow");
 else
 {
  for(i=top;i>=0;i--)
  printf("%d",stk[i]);
 }
}