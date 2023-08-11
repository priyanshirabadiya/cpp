#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
void display()
{
    struct node *ptr = head;
    if (head==NULL)
        printf("list is empty\n");
    else {
        while (ptr != NULL)
        {
            printf("%d  ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void insert(int val) 
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    
        ptr = ptr->next;
    ptr->next = temp;
    return;
    
}

void delect()
{
    struct node *ptr=head;
    struct node *p;

    if(head->next==NULL)
    {
        head=NULL;
        free(ptr);
        return;
    }
    while(ptr -> next!=NULL)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next =NULL;
    free(ptr);
    return;
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
    return;
}

void firstdelect()
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
    //temp->next=p;
    while(ptr->data!=p){
         ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
    }
 
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
    p->next=ptr->next;
    free(ptr);
}

int main() {
    
    insert(10);
    insert(20);
    insert(60);
    insert(40);
    insert(50);
    insert(90);
    insert(30);
    insert(40);
    display();
    insertfirst(450);
    insertmid(500,60);
    middelect(50);
   // delect();
   // delect();
    display();
    
}
