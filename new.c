#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;

void display() {
    struct node *ptr = head;
    if (head == NULL)
        printf("List is empty\n");
    else {
        while (ptr != NULL) {
            printf("%d ", ptr->data);
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

void deleteLast() {
    struct node *ptr = head;
    struct node *p;

    if (head->next == NULL) {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != NULL) {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

void insertFirst(int val) {
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    if (head == NULL) {
        temp->data = val;
        temp->next = NULL;
        head = temp;
    }
    temp->next = ptr;
    return;
}

void deleteFirst() {
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
}

void insertMid(int val, int p) {
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    while (ptr->data != p)
        ptr = ptr->next;
    temp->next = ptr->next;
    ptr->next = temp;
}

void deleteMid(int pos) {
    struct node *ptr = head;
    struct node *p;
    while (ptr->data != pos) {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);

}

int main()
{
     insertFirst(10);
    insert(100);
    insert(200);
    deleteFirst();
    display();
    //insertFirst(10);
    insertMid(30,100);
    deleteMid(200);
    display();
}