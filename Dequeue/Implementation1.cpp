#include<iostream>
using namespace std;

class Node {

    public:
        int data;
        Node *prev, *next;
    
        Node (int value){
            data = value;
            prev = NULL;
            next = NULL;
        }
};

class Deque {

    Node *front, *rear;
    
    public:

        Deque() {
            front = rear = NULL;
        }

        void push_front(int x) {

            if(front){

                Node *temp = new Node(x);

                if(!temp) {
                    cout<<"Deque Overflow"<<endl;
                    return;
                }

                front ->prev = temp;
                temp ->next = front;
                front = front ->prev;

                cout<<front ->data<<" is pushed in front"<<endl;
                return;
            }
            else{
                front = rear =  new Node(x);
                cout<<front ->data<<" is pushed in front"<<endl;
                return;
            }
        }

        void push_back(int x) {
            
            if(rear) {
                Node *temp = new Node(x);

                if(!temp) {
                    cout<<"Deque Overflow"<<endl;
                    return;
                }

                rear ->next = temp;
                temp ->prev = rear;
                rear = rear ->next;

                cout<<rear ->data<<" is pushed in back"<<endl;
                return;
            }
            else {
                rear = front = new Node(x);
                cout<<rear ->data<<" is pushed in back"<<endl;
                return;
            }
        }

        void pop_front() {

            if(!front) {
                cout<<"Deque Underflow"<<endl;
                return;
            }
            else {
                Node *temp = front;
                front = front ->next;
                cout<<temp ->data<<" is popped from front"<<endl;
                delete temp;

                if(front)
                    front ->prev = NULL;
                else
                    rear = NULL;
                return;
            }

        }

        void pop_back() {

            if(!rear) {
                cout<<"Deque Underflow"<<endl;
                return;
            }
            else {
                Node *temp = rear;
                rear = rear ->prev;
                cout<<temp ->data<<" is popped from back"<<endl;
                delete temp;

                if(rear)
                    rear ->next = NULL;
                else
                    front = NULL;
                
                return;
            }
        }

        int start() {

            if(!front) {
                cout<<"Deque is empty"<<endl;
                return -1;
            }
            
            return front ->data;
        }

        int end() {

            if(!rear) {
                cout<<"Deque is empty"<<endl;
                return -1;
            }
            
            return rear ->data;
        }
};

int main() {

    Deque dq;

    // 12 46 98 56 72 9

    dq.push_back(56);
    dq.push_front(98);
    dq.push_back(72);
    dq.push_front(46);
    dq.push_back(9);
    dq.push_front(12);

    cout<<"Start element "<<dq.start()<<endl;
    cout<<"End element "<<dq.end()<<endl;

    dq.pop_back();
    dq.pop_front();

    cout<<"Start element "<<dq.start()<<endl;
    cout<<"End element "<<dq.end()<<endl;

    dq.pop_back();
    dq.pop_front();
    dq.pop_back();
    dq.pop_front();
    dq.pop_back();


    return 0;
}