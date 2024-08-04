#include<iostream>
using namespace std;

    // Method 3.
     // Implemented using linked list

class Node {

    public:
        int data;
        Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {

    Node *front, *rear;

    public: 

        Queue() {
            front = rear = NULL;
        }

        bool IsEmpty() {
            return front == NULL;
        }

        void push(int x) {

            if(IsEmpty()) {
                front = new Node(x);
                rear = front;
                 cout<<rear ->data<<" is pushed"<<endl;
                 return;
            }
            else {
                rear ->next = new Node(x);
                if(rear ->next == NULL){
                    cout<<"Queue Overflow"<<endl;
                    return;
                }
                rear = rear ->next;
                cout<<rear ->data<<" is pushed"<<endl;
                return;
            }
        }

        void pop() {

            if(IsEmpty()) {
                cout<<"Queue Underflow"<<endl;
                return;
            }
            else{
                Node *temp = front;
                front = front ->next;
                cout<<temp ->data<<" is popped"<<endl;
                delete temp;
                return;
            }
        }

        int start() {
            
            if(IsEmpty()) {
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else return front ->data;
        }
};

int main() {

    Queue q1;

    q1.push(2);
    q1.push(7);
    q1.push(20);
    q1.push(22);
    q1.pop();
    q1.pop();
    q1.push(5);
    q1.push(5);
    q1.push(5);
    q1.push(5);

    int x = q1.start();
    if(!q1.IsEmpty())
        cout<<x<<endl;

    return 0;
}