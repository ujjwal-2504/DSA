#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<int> q1;
    

    q1.push(3);
    q1.push(96);
    q1.push(56);
    q1.push(30789);
    q1.push(323);
    q1.push(3667);

    // Print all elements present in queue q1

    // TC = O(n), SC = O(1)

    // while(!q1.empty()){
    //     cout<<q1.front()<<endl;
    //     q1.pop();
    // }

    // Print all elements present in queue without deleting the elements of queue

    // TC = O(n), SC = O(n)

    // vector<int> store(q1.size());

    // while(!q1.empty()){
    //     cout<<q1.front()<<endl;
    //     store.push_back(q1.front());
    //     q1.pop();
    // }
    // for(int i = 0; i < store.size(); i++){
    //     q1.push(store[i]);
    // }

    // Print all elements present in queue without deleting the elements of queue

    // TC = O(n), SC = O(1)

    int size = q1.size();

    while(size){
        int element = q1.front();
        cout<<element<<endl;
        q1.pop();
        q1.push(element);
        size--;
    }

    cout<<"The size of the queue is "<<q1.size();








    return 0;
}