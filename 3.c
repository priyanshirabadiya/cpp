#include <stdio.h>
#include <string.h> // Add this header for using string functions

struct node {
    // Define the structure members here as needed
};

class test {
    int x, y;
    char ch[20];
    int roll_no;
    struct node* ptr;

public:
    void getdata() {
        printf("\n Enter data\n");
        printf("enter name:");
        scanf("%s", ch); // Remove & before ch
        printf("enter roll no:");
        scanf("%d", &roll_no);
        ptr = NULL;

        printf("enter name:");
        scanf("%s", ch); // Change &y.ch to ch
        printf("enter roll no:");
        scanf("%d", &y.roll_no); // Change x.roll_no to y.roll_no
        y.ptr = NULL;
    }
};

class test2 : public test {
public:
    void data() {
        // Since x and y are member variables of the base class,
        // we need to use different names to avoid conflicts.
        test x_data, y_data;

        x_data.ptr = &y_data;
        y_data.ptr = &x_data;

        printf("\n\nname:%s \t roll no :%d", x_data.ptr->ch, x_data.ptr->roll_no);
        printf("\n\n\nname:%s \t roll no :%d", y_data.ptr->ch, y_data.ptr->roll_no);
    }
} t;

int main() {
    t.getdata();
    t.data();
}
