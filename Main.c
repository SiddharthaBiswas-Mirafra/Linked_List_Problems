#include"header.h"
/*.....................Main Functoion............................*/

int main()
{
struct node *head=NULL;
int choice,data,item;
while(1)
{
_menu();
printf("Enter your Choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
head=Create_List(head);
break;
case 2:
printf("\nEnter data to be Inseted: ");
scanf("%d",&data);
head=Addatbeg(head,data);
break;
case 3:
printf("\nEnter data to be Inserted at the end: ");
scanf("%d",&data);
head=Addatend(head,data);
break;
case 4:Display(head);
break;
case 5:
printf("\nEnter Your Data: ");
scanf("%d",&data);
printf("\nEnter Data where to be insrert after: ");
scanf("%d",&item);
head=Addatafter(head,data,item);
break;
case 6:
printf("\nEnter Your Data: ");
scanf("%d",&data);
printf("\nEnter Data where to be insrert before: ");
scanf("%d",&item);
head=Addatbefore(head,data,item);
break;
case 7:
printf("\nEnter data which want to be searc: ");
scanf("%d",&data);
head=Search(head,data);
break;
case 8:
head=Revers(head);
break;
case 9:
printf("Enter the data which you want to delete in the list.");
scanf("%d",&data);
head=delNode(head,data);
break;
case 10:
head=RecRevers(head);
break;
case 11:
RevDisplay(head);
break;
case 12:
printf("\nEnter data to be Inserted at the end: ");
scanf("%d",&data);
head=insertEnd(head,data);
break;
case 13: return 0;
default: printf("\n..............Invalid Choice.......................\n");
}
}
}

