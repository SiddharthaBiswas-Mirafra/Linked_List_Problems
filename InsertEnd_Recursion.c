#include"header.h"
/*...........................Insert node at the end with recursion.....................*/

struct node *insertEnd(struct node *head,int data)
{
if(head==NULL)
return NewNode(data);
else
head->next=insertEnd(head->next,data);
return head;
}

struct node *NewNode(int data)
{
struct node *new_node=(struct node*)malloc(sizeof(struct node));
new_node->info=data;
new_node->next=NULL;
return new_node;
}
