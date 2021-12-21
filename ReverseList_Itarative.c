#include"header.h"
/*.......................Reverse List......................*/

struct node *Revers(struct node *head)
{
struct node *prev,*ptr,*link;
prev=NULL;
ptr=head;
while(ptr!=NULL)
{
link=ptr->next;
ptr->next=prev;
prev=ptr;
ptr=link;
}
head=prev;
return head;
}
