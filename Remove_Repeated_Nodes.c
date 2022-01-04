#include"header.h"
/*......................Remove Repeated nodes...........................*/

struct node *RemoveRepeat(struct node* head)
{
        if(head==NULL || head->next==NULL)
                return head;
        struct node* temp=NULL;
        while(head->info == head->next->info)
        {
                temp=head;
                head=head->next;
                free(temp);
                temp=NULL;
        }
        temp=head;
        while(temp->next)
        {
                struct node *cur=temp->next,*prev=temp->next;
                while(cur && cur->next)
                {
                        prev=cur;
                        cur=cur->next;
                        {
                                if(cur->info==temp->info)
                                {
                                        prev->next=cur->next;
                                        free(cur);
                                        cur=prev->next;
                                }
                        }
                }
                temp=temp->next;
        }

        return head;

}

