#include<iostream>
#include<string.h>
using namespace std;
struct node {
    char ch[20];
    int roll_no;
    struct node* ptr;
};

class test {
    int x, y;
    char ch[20];
    int roll_no;
    struct node* ptr;
};

class test2 : public test {
public:
    void getdata() {
        cout << "\nEnter data\n";
        struct node x, y;
        cout << "enter name:";
        cin >> x.ch;
        cout << "enter roll no:";
        cin >> x.roll_no;
        x.ptr = NULL;

        cout << "enter name:";
        cin >> y.ch;
        cout << "enter roll no:";
        cin >> y.roll_no;
        y.ptr = NULL;

        x.ptr = &y;
        y.ptr = &x;
        cout<<"\n1 data:"<<endl;
        cout << "name: " << x.ptr->ch << "\t roll no: " << x.ptr->roll_no << endl;
        cout<<"\n2 data:"<<endl;
        cout << "name: " << y.ptr->ch << "\t roll no: " << y.ptr->roll_no << endl;
        
    }
}t;

int main() {
   // test2 t;
    t.getdata();
}
