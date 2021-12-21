#include"header.h"

/*............................Reverse Print.............................*/

void RevDisplay(struct node *head)
{
if(head==NULL)
return;
RevDisplay(head->next);
printf("%d-->",head->info);
}
