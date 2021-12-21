#include"header.h"
/*........................Searching.....................*/

struct node *Search(struct node *head,int data)
{
struct node *p,*temp;
int pos=0;
p=head;
while(p!=NULL)
{
pos++;
if(p->info==data)
{
printf("\nInput data %d is found at Position number %d.\n",data,pos);
return head;
}
p=p->next;
}
printf("\nThe Input data %d have not in the list.\n",data);
return head;
}
