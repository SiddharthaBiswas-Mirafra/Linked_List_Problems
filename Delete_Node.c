#include"header.h"
/*......................Delete Node...........................*/

struct node *delNode(struct node *head,int data)
{
struct node *temp,*ptr;
if(head==NULL)
{
printf("The List is Empty now.");
return head;
}
if(head->info==data)
{
temp=head;
head=temp->next;
free(temp);
printf("\n Node and data both are deleted successfully.\n");
return head;
}
ptr=head;
while(ptr->next!=NULL)
{
if(ptr->next->info==data)
{
temp=ptr->next;
ptr->next=temp->next;
free(temp);
printf("\n Node and data both are deleted successfully.\n");
return head;
}
ptr=ptr->next;
}
printf("\nThe Input data %d have not in the List.\n",data);
return head;
}
