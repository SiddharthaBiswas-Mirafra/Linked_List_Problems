#include"header.h"
/*......................Display Function...............................*/

void Display(struct node *head)
{
if(head==NULL)
{
printf("The List is empty\n");
return;
}
while(head!=NULL)
{
printf("%d -->",head->info);
head=head->next;
}
printf("\n\n");
}
