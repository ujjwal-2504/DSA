#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// All properties of map.
// but have no specific order to store elements
// T.C -> constant O(1)

int main() {

  unordered_map<int, int> m1;

  m1.insert(make_pair(20, 2242));
  m1.insert(make_pair(30, 243));
  m1.insert(make_pair(40, 442));
  m1.insert(make_pair(20, 334));
  m1.insert(make_pair(50, 940));
  m1[100] = 367;
  m1[35] = 358; // insert the value
  m1[40] = 4000; // update the value

  for(auto it = m1.begin(); it != m1.end(); it++) {

    cout<<it ->first<<" "<<it ->second<<endl;
  }

  cout<<m1[400]<<endl; // Allowed

  // Unordered multi map
  // duplicate keys are allowed

  unordered_multimap<int, int> m2;

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
  // // m2[40] = 4000; 

  cout<<"\nUnordered Multi Map"<<endl;

  for(auto it = m2.begin(); it != m2.end(); it++) {

    cout<<it ->first<<" "<<it ->second<<endl;
  }
}



