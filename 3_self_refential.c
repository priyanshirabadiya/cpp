#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node*ptr;
};
int main()
{
    struct node x,y,t,r;
    x.ch='A';
    x.data=65;
    x.ptr=NULL;

    y.ch='P';
    y.data=45;
    y.ptr=NULL; 

    t.ch='D';
    t.data=56;
    t.ptr=NULL; 

    r.ch='h';
    r.data=34;
    r.ptr=NULL; 

    y.ptr=&x;
    x.ptr=&y;
    t.ptr=&r;
    r.ptr=&t;


    printf("X:\n data:%d \t ch:%c",y.ptr->data,y.ptr ->ch); 
    printf("\n\nY:\n data:%d \t ch:%c",x.ptr->data,x.ptr ->ch);
    printf("\n\nT:\n data:%d \t ch:%c",r.ptr->data,r.ptr ->ch);
    printf("\n\nR:\n data:%d \t ch:%c",t.ptr->data,t.ptr ->ch);   
}