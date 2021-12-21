#include"header.h"

/*.......................Create List..................................*/

struct node *Create_List(struct node *head)
{
head=NULL;
int num,data,i;
printf("\nEnter How many number of data to be inserted: ");
scanf("%d",&num);
if(num==0)
{
return head;
}
printf("\nEnter Your Data: ");
scanf("%d",&data);
head=Addatbeg(head,data);
for(i=2;i<=num;i++)
{
printf("\nEnter Your Data: ");
scanf("%d",&data);
head=Addatend(head,data);
}
return head;
}
