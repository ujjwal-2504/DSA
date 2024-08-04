#include<iostream>
#include<deque>
using namespace std;

class Queue {

    deque<int> dq;
    public:

    void push(int val) {
        dq.push_back(val);
    }

    void pop() {
        dq.pop_front();
    }

    int top() {
        return dq.front();
    }

    int size() {
        return dq.size();
    }

    bool empty() {
        return dq.empty();
    }
};

int main() {

    Queue q;

    q.push(21);
    q.push(26);
    q.push(31);
    q.push(42);
    q.push(35);
    q.push(578);
    q.push(45);

    cout<<q.top()<<endl;
    cout<<q.size()<<endl;

    q.pop();
    q.pop();

    cout<<q.top()<<endl;
    cout<<q.size()<<endl;

    return 0;
}