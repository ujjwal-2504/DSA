#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// unordered_set:
// It stores unique element
// It stores data in unordered way
//  ↪ no specific order not even insertion order.
// T.C. of insertion, deletion and search -> O(n);
// Implemented by Hashing

// unordered_multiset:
// All properties of unordered_set except:
// Duplicate elements can be stored.

int main() {

  unordered_set<int> us;
  us.insert(10);
  us.insert(12);
  us.insert(910);
  us.insert(910);
  us.insert(150);
  us.insert(10);
  us.insert(943);
  us.insert(102);
  us.insert(152);
  us.insert(102);
  us.insert(1002);

  for(auto it = us.begin(); it != us.end(); it++) {
    cout<< *it <<" ";
  }cout<<endl;

  unordered_multiset<int> ums;
  ums.insert(10);
  ums.insert(12);
  ums.insert(910);
  ums.insert(910);
  ums.insert(150);
  ums.insert(10);
  ums.insert(943);
  ums.insert(102);
  ums.insert(152);
  ums.insert(102);
  ums.insert(1002);

  for(auto it = ums.begin(); it != ums.end(); it++) {
    cout<< *it <<" ";
  }cout<<endl;

  
}