#include<stdio.h>
//#include<string.h>
#include<stdlib.h>

/*.........................Craete Structure........................*/

struct node
{
int info;
struct node *next;
};

/*..........................Fucntion Decliaration..................*/
void _menu(void);
struct node *Create_List(struct node *head);
struct node *Addatbeg(struct node *head,int data);
struct node *Addatend(struct node *head,int data);
struct node *Addatafter(struct node *head,int data,int item);
struct node *Addatbefore(struct node *head,int data,int item);
struct node *Search(struct node *head,int data);
struct node *Revers(struct node *head);
struct node *RecRevers(struct node *head);
struct node *delNode(struct node *head,int data);
struct node *insertEnd(struct node *head,int data);
struct node *NewNode(int data);
void Display(struct node *head);
void RevDisplay(struct node *head);
//struct node *ReversePrint(struct node *head);

