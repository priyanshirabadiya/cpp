#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node *prev;
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
    //struct node prev->ptr;
    struct node *ptr=head;
   // struct node *prev = ptr;
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
    temp->prev=ptr;
    return;
    
 }
 void firstdelect()
{
    struct node *ptr=head;
    head=ptr->next;
    free(ptr); 

}

 void insertfirst(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    if(head==NULL)
    {  
        temp->data=val;
        temp->next = NULL;
        head =temp;
    }
    temp->next = ptr;
    temp->prev=ptr;
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
void middelect(int pos)
{
    struct node *ptr=head;
    struct node *p;
    while(ptr->data!=pos)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=ptr->next->next->next;
    free(ptr);
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
    insertfirst(10);
    insert(100);
    insert(200);
    insert(30);
    insert(40);
    insert(80);
    insert(50);
    display();
    insertfirst(10);
    firstdelect();
    insertmid(11,200);
    middelect(30);
   display();

}


