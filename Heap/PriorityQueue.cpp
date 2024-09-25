#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  priority_queue<int> q1; // Max Heap

  cout<<"Max Heap"<<endl;
  
  q1.push(30);
  q1.push(2);
  q1.push(80);
  q1.push(30);
  q1.push(37);
  q1.push(32);
  q1.push(0);

  cout<<q1.top()<<" ";

  // delete
  q1.pop();
  cout<<q1.top()<<" ";

  // size
  cout<<"\nSize of queue is: "<<q1.size()<<endl;

  // print
  while(!q1.empty()) {

    cout<<q1.top()<<" ";
    q1.pop();
  }

  priority_queue<int, vector<int>, greater<int>> q2; // Min Heap

  cout<<"\n\nMin Heap"<<endl;
  
  q2.push(30);
  q2.push(2);
  q2.push(80);
  q2.push(30);
  q2.push(37);
  q2.push(32);
  q2.push(0);

  cout<<q2.top()<<" ";

  // delete
  q2.pop();
  cout<<q2.top()<<" ";

  // size
  cout<<"\nSize of queue is: "<<q2.size()<<endl;

  // print
  while(!q2.empty()) {

    cout<<q2.top()<<" ";
    q2.pop();
  }

  return 0;
}