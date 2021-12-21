#include"header.h"
/*........................Add at End.....................................*/

struct node *Addatend(struct node *head,int data)
{
struct node *temp,*p;
p=head;
while(p->next!=NULL)
{
p=p->next;
}
temp=(struct node*)malloc(sizeof(struct node));
temp->info=data;
p->next=temp;
temp->next=NULL;
return head;
}
