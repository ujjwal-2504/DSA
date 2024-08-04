#include<iostream>
#include<deque>
using namespace std;

int main() {

    deque<int> dq;

    // 4 2 1 3 5

    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    dq.push_back(5);
    dq.push_back(6);

    cout<<"Start element: "<<dq.front()<<endl;
    cout<<"End element: "<<dq.back()<<endl;

    dq.pop_back();
    dq.pop_front();
    dq.pop_back();

    // 2 3
    cout<<"Start element: "<<dq.front()<<endl;
    cout<<"End element: "<<dq.back()<<endl;

    return 0;
}