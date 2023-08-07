#include<stdio.h>
class test
{
    int x,y;
    char ch[20];
    int roll_no;
    struct node*ptr;
    public:
    void getdata()
    {
       cout("\n Enter data\n"); 
    struct node x,y;
    printf("enter name:");
    scanf(" %s",&y.ch);
    printf("enter roll no:");
    scanf(" %d",&x.roll_no);
    x.ptr=NULL;


    printf("enter name:");
    scanf(" %s",&y.ch);
    printf("enter roll no:");
    scanf(" %d",&y.roll_no);
    y.ptr=NULL;
 
    }
    
    
};

class test2:public test{
public:
void data()
{      

x.ptr=&y;
y.ptr=&x;

printf("\n\nname:%s \t roll no :%d",x.ptr->ch,x.ptr->roll_no);
printf("\n\n\nname:%s \t roll no :%d",y.ptr->ch,y.ptr->roll_no);
}

}t;

int main()
{
    
    t.getdata();
    t.data();
}