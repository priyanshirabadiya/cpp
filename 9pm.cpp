#include<iostream>
#include<string.h>
using namespace std;
struct self {
    char ch[20];
    int roll_no;
    struct self*link;
};

class test {
    int x, y;
    char ch[20];
    int roll_no;
    struct self* ptr;
};

class test2 : public test {
public:
    void getdata() {
        cout << "\nEnter data\n";
        struct self x, y;
        cout << "enter name:";
        cin >> x.ch;
        cout << "enter roll no:";
        cin >> x.roll_no;
        x.link = NULL;

        cout << "enter name:";
        cin >> y.ch;
        cout << "enter roll no:";
        cin >> y.roll_no;
        y.link = NULL;

        x.link = &y;
        y.link = &x;
        cout<<"\n1 data:"<<endl;
        cout << "name: " << x.link->ch << "\t roll no: " << x.link->roll_no << endl;
        cout<<"\n2 data:"<<endl;
        cout << "name: " << y.link->ch << "\t roll no: " << y.link->roll_no << endl;
        
    }
}t;

int main() {
   // test2 t;
    t.getdata();
}
