#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Stores only unique element.
// sorted order
// Implementation -> Red-Black tree, AVL tree
// For all operations T.C. -> O(log n)

class Person {

  public:
    string name;
    int age;

    bool operator < (const Person &other) const{
      return age < other.age;
    }
};

class Janwar {

  public:
    string name;
    int weight;

    bool operator < (const Janwar &aglaJanwar) const{
      return weight > aglaJanwar.weight;
    }
};

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

  // Search

  // 1. find -> returns the iterator of that element, if not found return set.end()
  if(s2.find(110) != s2.end())
    cout<< "Present"<<endl;
  else 
    cout<<"Absent"<<endl;

  // 2. count -> returns count of that number.
  if(s1.count(13)) 
    cout<<"Present"<<endl;
  else
    cout<<"Absent"<<endl;

  // delete
  s2.erase(110);
  cout<<s2.count(110)<<endl;

  set<Person> s3;

  Person p1, p2, p3;

  p1.name = "Ujjwal", p1.age = 10;
  p2.name = "Pushkar", p2.age = 9;
  p3.name = "Mohan", p3.age = 11;

  s3.insert(p1);
  s3.insert(p2);
  s3.insert(p3);
  
  for(auto it = s3.begin(); it != s3.end(); it++) {
    cout<<"Age: " << it ->age <<", Name: "<< it ->name <<endl;
  }

  set<Janwar> s4;

  Janwar j1, j2, j3;

  j1.name = "Sher", j1.weight = 180;
  j2.name = "Bhalu", j2.weight = 130;
  j3.name = "Cheetah", j3.weight = 44;

  s4.insert(j1);
  s4.insert(j2);
  s4.insert(j3);

  for(auto it = s4.begin(); it != s4.end(); it++) {
    cout<<it ->name<<", Weight: "<<it ->weight<<endl;
  }

}