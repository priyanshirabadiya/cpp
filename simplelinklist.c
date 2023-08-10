#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

struct node *head=NULL;
void display()
{
    struct node *ptr = head;
    if(head==NULL)
        printf("list is empty");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d  ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");

}
void insert(int val)
{
    struct node *ptr=head;
    struct node *temp= malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    {
        
        head=temp;
        return;

    }
    while(ptr->next != NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return;
    
 }
 void delete()
 {
    struct node *ptr= head;
    struct node *p;
    if(head->next==NULL)
    {
        head=NULL;
        free(ptr);
        return;

        while(ptr ->next!=NULL)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next =NULL;
        free(ptr);
        return;
    }

 }
int main()
{

    insert(100);
   // insert(200);
   // display();
  //  delete(100);
   // delete(200);
    display();
}


