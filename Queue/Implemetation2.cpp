#include<iostream>
using namespace std;

// Method 2.
    //Implemeted using circular array

class Queue{

    int *arr;
    int front, rear, size;

    public:

        Queue(int n){
            
            arr = new int[n];
            size = n;
            front = rear = -1;
        }

        bool IsEmpty() {
            return front == -1;
        }

        bool IsFull() {
            return (rear+1) % size == front;
        }

        void push(int x) {

            if(IsFull()) {
                cout<<"Queue Overflow"<<endl;
                return;
            }
            else if(IsEmpty()) {
                front = rear = 0;
                arr[rear] = x;
                cout<<arr[rear]<<" is Pushed"<<endl;
                return;
            }
            else {
                rear = (rear+1) % size;
                arr[rear] = x;
                cout<<x<<" is Pushed"<<endl;
                return;
            }
        }

        void pop() {

            if(IsEmpty()) {
                cout<<"Queue Underflow"<<endl;
                return;
            }
            else if(front == rear) {
                cout<<arr[front]<<" is Popped"<<endl;
                front = rear = -1;
                return;
            }
            else {
                cout<<arr[front]<<" is Popped"<<endl;
                front = (front+1) % size;
                return;
            }
        }

        int start() {

            if(IsEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else return arr[front];
        }


};




int main() {

    Queue q1(5);

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