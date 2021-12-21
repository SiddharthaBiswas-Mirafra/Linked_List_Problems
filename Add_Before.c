#include"header.h"
/*.....................Add at before.....................................*/

struct node *Addatbefore(struct node *head,int data,int item)
{
struct node *temp,*p;
if(head==NULL)
{
printf("\n......................The list is empty.................\n");
return head;
}
if(item==head->info)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->next=head;
head=temp;
return head;
}
p=head;
while(p->next!=NULL)
{
if(p->next->info==item)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->next=p->next;
p->next=temp;
return head;
}
p=p->next;
}
printf("\nItem %d Have not in the list.\n",item);
return head;
}
