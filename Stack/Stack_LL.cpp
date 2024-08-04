#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node *next;

    Node(int value){

        data = value;
        next = NULL;
        
    }
};

class Stack{

    Node *top;
    int size;

    public:

    Stack() {
        top = NULL;
        size = 0;
    }

    // Push
    void push(int value) {

        Node *temp = new Node(value);

        if(temp == NULL){
            cout<<"Stack Overflow";
            return;
        }
        temp ->next = top;
        top = temp;
        cout<<"Pushed "<<value<<" into the stack"<<endl;
        size++;
    }

    //Pop
    void pop() {

        if(!size){
            cout<<"Stack underflow"<<endl;
            return;
        }

        Node *temp = top;
        cout<<"Popped "<<top ->data<<" from the stack"<<endl;
        top = top ->next;
        delete temp;
        size--;
    }

    //Peek
    int peek() {

        if(!size){
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        return top ->data;
    }

    //Size
    int IsSize() {
        
        return size;
    }

    bool IsEmpty() {

        return !size;
    }
};


int main() {

    Stack S2;

    S2.push(6);
    S2.push(9);
    S2.push(8);
    S2.push(2);
    S2.push(60);

    S2.pop();
    S2.pop();

    cout<<S2.IsSize()<<endl;

    cout<<S2.peek()<<endl;

    cout<<S2.IsEmpty()<<endl;

    return 0;
}