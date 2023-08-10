#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;
void display() 
{
    struct node *ptr = head;
    if (head==NULL)
        printf("list is empty\n");
    else {
        while (ptr-> next!=head) {
           // printf("%d  ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("%d",ptr->data);
    printf("\n");
}

void insert(int val) {
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    
    if (head == NULL) {
        head = temp;
        temp->next = head;
        return;
    }
    while(ptr->next!=head)
        ptr=ptr->next;
    ptr->next=temp;
    temp->next=head;
    return;
}
int main()
{
    insert(100);
    insert(200);
    insert(300);
    display();
}