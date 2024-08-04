#include<iostream>
using namespace std;

class NODE{
    public:
        int data;
        NODE *next;

    NODE(int value){
        data = value;
        next = NULL;
    }
};


int main() {

    //Statically Created NODE
    // NODE A1;
    // A1.data = 4;
    // A1.next = NULL;

    //Dynamically Created NODE (M1)
    // NODE *Head;

    // Head = new NODE();
    // Head -> data = 4;
    // Head -> next = NULL;

    //Dynamically Created NODE (M2)

    NODE *Head;
    Head = new NODE(4);

    return 0;
}
