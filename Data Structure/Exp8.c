#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head = NULL;
void push(int val)
{
 //create new node
 struct node *newNode = malloc(sizeof(struct node));
 newNode->data = val;
 //make the new node points to the head node
 newNode->next = head;
 //make the new node as head node
 //so that head will always point the last inserted data
 head = newNode;
}
void pop()
{
 //temp is used to free the head node
 struct node *temp;
 if(head == NULL)
 printf("Stack is Empty\n");
 else
 {
 printf("Poped element = %d\n", head->data);
 //backup the head node
 temp = head;
 //make the head node points to the next node.
 //logically removing the node
 head = head->next;
 //free the poped element's memory
 free(temp);
 }
}
//print the linked list
void printList()
{
 struct node *temp = head;
 //iterate the entire linked list and print the data
 while(temp != NULL)
 {
printf("%d->", temp->data);
 temp = temp->next;
 }
 printf("NULL\n");
}
int main()
{
 int val, ch;
 clrscr();
 do
 {
 printf("1:PUSH\n2:POP\n3:Diaplay\n4.Exit\n");
 printf("Enter your choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: printf("Enter no\n");
scanf("%d",&val);
push(val);
break;
 case 2:pop();
break;
 case 3: printf("Linked List\n");
 printList();
 break;
 case 4: exit(0);
 default:printf("Invalid choice\n");
 }
 }while(ch!=4);
 getch();
 return 0;
}