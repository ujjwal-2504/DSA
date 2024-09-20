#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// It store data in key—value pair
// Key should be unique.
// It uses Red-black Tree or AVL for implementation
// Insertion, deletion, and search operations have logarithmic time complexity -> O(log n)
// (O(log n)), making them fast for most use cases.

int main() {

  // map creation
  map<int, int> m1;

  m1.insert(make_pair(20, 2242));
  m1.insert(make_pair(30, 243));
  m1.insert(make_pair(40, 442));
  m1.insert(make_pair(20, 334));
  m1.insert(make_pair(50, 940));
  m1[100] = 367;
  m1[35] = 358; // insert the value
  m1[40] = 4000; // update the value

  // for(auto it = m1.begin(); it != m1.end(); it++) {

  //   cout<<it ->first<<" "<<it ->second<<endl;
  // }

  cout<<m1[400]<<endl;

  // delete 
  m1.erase(35);

  for(auto it = m1.begin(); it != m1.end(); it++) {

    cout<<it ->first<<" "<<it ->second<<endl;
  }

  // Multi map
  // duplicate keys are allowed

  multimap<int, int> m2;

  m2.insert(make_pair(20, 2242));
  m2.insert(make_pair(30, 243));
  m2.insert(make_pair(40, 4442));
  m2.insert(make_pair(40, 442));
  m2.insert(make_pair(20, 334));
  m2.insert(make_pair(20, 384));
  m2.insert(make_pair(50, 940));
  m2.insert(make_pair(50, 9470));
  // m2[100] = 367;
  // m2[35] = 358; These are not allowed in multimap
  // m2[40] = 4000; 

  cout<<"\nMulti Map"<<endl;

  for(auto it = m2.begin(); it != m2.end(); it++) {

    cout<<it ->first<<" "<<it ->second<<endl;
  }
}



