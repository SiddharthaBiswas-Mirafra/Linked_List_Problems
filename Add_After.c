#include"header.h"

/*........................Add at after...................................*/

struct node *Addatafter(struct node *head,int data,int item)

{
struct node *temp,*p;
p=head;
while(p!=NULL)
{
if(p->info==item)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->next=p->next;
p->next=temp;

return head;
}
p=p->next;
}
printf("\nInput %d have not in the list\n",item);
return head;
}

