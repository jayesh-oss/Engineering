#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
int stack[20];
int top=-1;
void push(int x)
{
 stack[++top]=x;
}
int pop()
{
 return(stack[top--]);
}
int main()
{
 char exp[20];
 char *e;
 int n1,n2,n3,num;
 clrscr();
 printf("Enter a postfix expression\n");
 scanf("%s",exp);
 e=exp;
 while(*e!='\0')
 {
  if(isdigit(*e))
  {
   num=*e-48;
   push(num);
  }
  else
  {
   n2=pop();
   n1=pop();
   switch(*e)
   {
    case '+':n3=n1+n2;
    push(n3);
    break;
    case '-':n3=n1-n2;
    push(n3);
    break;
    case '*':n3=n1*n2;
    push(n3);
    break;
    case '/':n3=n1/n2;
    push(n3);
    break;
    case '%':n3=n1%n2;
    push(n3);
    break;
    case '^':n3=n1^n2;
    push(n3);
    break;
   }
  }
  e++;
 }
 printf("The result of Exp %s= %d\n",exp,pop());
 getch();
}


