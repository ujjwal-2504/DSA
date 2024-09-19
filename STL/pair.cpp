#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

      // name, age
  pair <string, int> p1;
  pair <string, int> p2;

  // two methods to insert elements
  p1 = make_pair("Rohit", 30);
  p2.first = "Rahul";
  p2.second = 20;

  cout<<p1.first<<" "<<p1.second<<endl;
  cout<<p2.first<<" "<<p2.second<<endl;

       // name,      weight, age
  pair <string, pair <int, int> > info;

  // info.first = "Raju";
  // info.second.first = 70;
  // info.second.second = 25;

  info = make_pair("Raju", make_pair(70, 25));

  cout<<info.first<<" "<<info.second.first<<" "<<info.second.second<<endl;

}