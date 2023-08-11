#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void display()
{
    struct node *ptr=head;
    if(head==NULL)
        printf("List is empty");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");
}
void insertEnd(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return;
}
void insertFrist(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
        return;
    }
     else
        temp->next=ptr;
        head=temp;
        return;
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
    while(ptr->next!=NULL)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
    return;
}
void deletFrist()
{
    struct node *ptr=head;
    head=ptr->next;
        free(ptr);
}
void insertmid(int val,int p)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    while(ptr->data!=p)
        ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
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
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    display();
    insertFrist(21);
    insertmid(12,40);
    deletmid(20);
    deletEnd();
    deletEnd();
    display();
}