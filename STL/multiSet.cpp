#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// All properties of set except:
// Can store Duplicate elements
// when delete operation perform on one element all duplicate elements will delete.

int main() {

  multiset<int> ms;
  ms.insert(10);
  ms.insert(12);
  ms.insert(910);
  ms.insert(910);
  ms.insert(150);
  ms.insert(10);
  ms.insert(102);
  ms.insert(102);
  ms.insert(152);
  ms.insert(102);

  for(auto it = ms.begin(); it != ms.end(); it++) {
    cout<< *it <<" ";
  }cout<<endl;

  ms.erase(10);

  for(auto it = ms.begin(); it != ms.end(); it++) {
    cout<< *it <<" ";
  }cout<<endl;

}