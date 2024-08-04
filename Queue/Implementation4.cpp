#include<iostream>
#include<queue>
using namespace std;

    // Method 4.
        // Implemeted using stl(Standard Templete Library)

int main() {

    queue<int> q1;

    // Push
    q1.push(2);
    q1.push(7);
    q1.push(20);
    q1.push(22);


    // Pop
    q1.pop();
    q1.pop();

    // front element.
    cout<<q1.front()<<endl;

    // back element.
    cout<<q1.back()<<endl;

    // size
    cout<<q1.size()<<endl;

    // empty
    cout<<q1.empty()<<endl;

    return 0;
}