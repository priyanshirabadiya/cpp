#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
void display() 
{
    struct node *ptr = head;
    if (head == NULL)
        printf("list is empty\n");
    else {
        while (ptr != NULL) {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

void insert(int val) {
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
    struct node*ptr=head;
    struct node*p;

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
  
void firstlink() {
    struct node *first =malloc(sizeof(struct node));
    first->data = 2;
    first->next = NULL;
    head = first;
}

int main() {
   
    firstlink();
    insert(100);
    insert(200);
    insert(600);
    display();
    delect();
    ////delect();
    //delect();
    //delect();
    display();
    
}
