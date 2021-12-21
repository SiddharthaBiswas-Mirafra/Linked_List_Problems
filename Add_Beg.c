#include"header.h"
/*......................Add at Beginning..................................*/

struct node *Addatbeg(struct node *head,int data)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->next=head;
head=temp;
return head;
}
