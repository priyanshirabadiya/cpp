#include<stdio.h>
#include<string.h>
using namespace std;
class test
{
    int x,y;
    char ch[20];
    int roll_no;
    struct node*ptr;
};

class test2:public test{
    public:
    void getdata()
    {
       cout("\n Enter data\n"); 
    struct node x,y;
    cout"enter name:"<<endl;
    cin>>x.ch;
    cout<<"enter roll no:";
    cin>>x.roll_no;
    x.ptr=NULL;


    cout<<"enter name:";
    cin>>&y.ch;
    cout<<"enter roll no:";
    cin>>y.roll_no;
    y.ptr=NULL;

    x.ptr=&y;
    y.ptr=&x;

    cout<<"name"<<x.ptr->ch \t <<"roll no"<<x.ptr->roll_no<<endl;
    //printf("\n\n\nname:%s \t roll no :%d",y.ptr->ch,y.ptr->roll_no);
    cout<<"name"<<ch<<roll_no<<y.ptr->ch \t <<"roll no"<<y.ptr->roll_no<<endl;
}

}t;

int main()
{
    
    t.getdata();
   // t.data();
}