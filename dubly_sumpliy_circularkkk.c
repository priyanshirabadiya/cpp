#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void display()
{
    struct node *ptr=head;
    if(head==NULL)
        printf("List is empty");
    else
    {
        while(ptr->next!=head)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("%d ",ptr->data);
    }
    printf("\n");
}
void insertEnd(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;
    }
    while(ptr->next!=head)
        ptr=ptr->next;
    ptr->next=temp;
    temp->next=head;
    temp->prev=ptr;
    return;
}
void insertFrist(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;
    }
    while(ptr->next!=head)
        ptr=ptr->next;
    ptr->next=temp;
    temp->prev=ptr;
    temp->next=head;
    head=temp;
    return;
}
void insertmid(int val,int p)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->prev=NULL;
    while(ptr->data!=p)
        ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
    temp->prev=ptr;
}
void deletEnd()
{
    struct node *ptr=head;
    struct node *p;
    if(head->next==NULL)
    {
        head=NULL;
        free(ptr);
        return;
    }
    while(ptr->next!=head)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=head;
    free(ptr);
    return;
}
void deletFrist()
{
 struct node *ptr=head;
    struct node *p=head;
    while(ptr->next!=head)
        ptr=ptr->next;
    ptr->next=p->next;
    head=p->next;
    free(p);
    return;
    
}
void deletmid(int pos)
{
    struct node *ptr=head;
    struct node *p;
    while(ptr->data != pos){
        p = ptr;
        ptr= ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}
int main()
{
    insertEnd(10);
    insertEnd(50);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(80);
    insertEnd(90);
    display();
    insertFrist(22);
    insertmid(33,30);
    deletFrist();
    deletmid(20);
    deletEnd();
    display();
}
