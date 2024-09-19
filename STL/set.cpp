#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  set<int> s1; // store in ascending order.

  // Insert
  s1.insert(10);
  s1.insert(180);
  s1.insert(190);
  s1.insert(110);
  s1.insert(10);
  s1.insert(10);
  s1.insert(50);
  s1.insert(90);
  s1.insert(13);

  for(auto it = s1.begin(); it != s1.end(); it++) {
    cout<< *it <<" ";
  }cout<<endl;
  
  // print in reverse
  // for(auto it = s1.rbegin(); it != s1.rend(); it++) {
  //   cout<< *it <<" ";
  // }

  set<int, greater<int> >s2; // store in descending order

  // Insert
  s2.insert(10);
  s2.insert(180);
  s2.insert(190);
  s2.insert(110);
  s2.insert(10);
  s2.insert(10);
  s2.insert(50);
  s2.insert(90);
  s2.insert(13);

  for(auto it = s2.begin(); it != s2.end(); it++) {
    cout<< *it <<" ";
  }cout<<endl;


    return 0;
}