#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  list<int> l1;

  // push
  l1.push_back(20);
  l1.push_front(60);
  l1.push_back(29);
  l1.push_back(20);
  l1.push_front(250);
  l1.push_back(920);
  l1.push_front(610);
  l1.push_back(219);
  l1.push_back(202);
  l1.push_front(290);

  // pop
  l1.pop_back();
  l1.pop_front();
  l1.pop_back();
  
  // front, back, size
  cout<<l1.front()<<" "<<l1.back()<<endl;
  cout<<l1.size()<<endl;

  // Iterator

  // for(list<int>::iterator it = l1.begin(); it != l1.end(); it++) {
  //   cout<< *it <<" ";
  // }

  for(auto it = l1.begin(); it != l1.end(); it++) {
    cout<< *it <<" ";
  }cout<<endl;

  // * -> value at oparator

   // output
  //  610 250 60 20 29 20 920  ⊛
  //  ↑                        ↑
  // l1.begin()              l1.end() => not (920) ∴ we use, it != l1.end();
  
  // printing in reverse order
  for(auto it = l1.rbegin(); it != l1.rend(); it++) {
    cout<< *it <<" ";
  }
  
  //  ⊛ 610 250 60 20 29 20 920
  //  ↑                       ↑
  // l1.rend()              l1.rbegin()

  return 0;
}