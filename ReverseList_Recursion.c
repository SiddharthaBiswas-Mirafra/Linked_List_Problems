#include"header.h"

/*..........................Reverse Recursion.........................*/
struct node *RecRevers(struct node *head)
{
if(head==NULL || head->next==NULL)
{
return head;
}
struct node *temp=RecRevers(head->next);
head->next->next=head;
head->next=NULL;
return temp;
}
