#include<iostream>
using namespace std;

class Deque {

    int *arr;
    int front, rear, size;

    public:
        Deque(int n){
            arr = new int[n];
            front = rear = -1;
            size = n;
        }

        bool IsEmpty() {
            return front == -1;
        }

        bool IsFull() {
            return (rear + 1) % size == front;
        }

        void push_front(int x) {

            if(IsEmpty()){
                // arr[++front = rear] = x;
                front = rear = 0;
                arr[front] = x;
                cout<<x<<" is pushed in front"<<endl;
                return;
            }
            else if(IsFull()){
                cout<<"Deque Overflow"<<endl;
                return;
            }
            else{
                front = (front -1 +size) %size;
                arr[front] = x;
                cout<<x<<" is pushed in front"<<endl;
                return;
            }
        }

        void push_back(int x) {

            if(IsEmpty()) {
                rear = front = 0;
                arr[rear] = x;
                cout<<x<<" is pushed in back"<<endl;
                return;
            }
            else if(IsFull()){
                cout<<"Deque Overflow"<<endl;
                return;
            }
            else{
                rear = (rear+1)%size;
                arr[rear] = x;
                cout<<x<<" is pushed in back"<<endl;
                return;
            }
        }

        void pop_front() {

            if(IsEmpty()) {
                cout<<"Deque Underflow"<<endl;
                return;
            }
            else {
                cout<<arr[front]<<" is popped from start"<<endl;

                if(front == rear)
                    front = rear = -1;
                else
                    front = (front +1) %size;

                return;
            }
        }

        void pop_back() {

            if(IsEmpty()) {
                cout<<"Deque Underflow"<<endl;
                return;
            }
            else {
                cout<<arr[rear]<<" is popped from end"<<endl;

                if(rear == front)
                    rear = front = -1;
                else
                    rear = (rear -1 +size) %size;
                
                return;
            }
        }

        int start() {
            
            if(IsEmpty()){
                cout<<"Deque is empty"<<endl;
                return -1;
            }
            return arr[front];
        }

        int end() {
            
            if(IsEmpty()){
                cout<<"Deque is empty"<<endl;
                return -1;
            }
            return arr[rear];
        }
};

int main() {

    Deque dq(5);

    // 4 2 1 3 5

    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    dq.push_back(5);
    dq.push_back(6);

    cout<<"Start element: "<<dq.start()<<endl;
    cout<<"End element: "<<dq.end()<<endl;

    dq.pop_back();
    dq.pop_front();
    dq.pop_back();

    // 2 1
    cout<<"Start element: "<<dq.start()<<endl;
    cout<<"End element: "<<dq.end()<<endl;



    return 0;
}