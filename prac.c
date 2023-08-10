#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node *ptr;
};
void main()
{
    struct node x,y;

    x.data=56;
    x.ch='s';
    x.ptr=NULL;

    y.data=3;
    y.ch='e';
    y.ptr=NULL;

    x.ptr=&y;
    y.ptr=&x;

    printf("data:%d\tchar: %c\n",x.ptr->data,x.ptr->ch);
    printf("data:%d\tchar: %c\n",y.ptr->data,y.ptr->ch);

}