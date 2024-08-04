#include<iostream>
using namespace std;

//Single Inheritance

class Animal{

    public:
        int age;
        int weight;
    
    void speak(){
        cout<<"speaking"<<endl;
    }
};
//Here
class Dog: public Animal{

};

//Multi-Level Inheritance

class Food{

    public:
        int price;
        

    void taste(){
        cout<<"Tasty"<<endl;
    }
};

class JunkFood: public Food{

};

//Here
class Pizza: public JunkFood{

};

//Multiple Inheritance

class Vegetable{

    public:
        void tomato(){
            cout<<"This is a tomato"<<endl;
        }
};

class Fruit{

    public:
        void apple(){
            cout<<"This is a apple"<<endl;
        }
};

//Here
class Eat: public Vegetable, public Fruit{

};

//Hierarchical Inheritance

class A{
    
    public:
        void func1(){
            cout<<"Inside A"<<endl;
        }
};

//Here
class B: public A{
    
    public:
        void func2(){
            cout<<"Inside B"<<endl;
        }
};

class C: public A{
    
    public:
        void func3(){
            cout<<"Inside C"<<endl;
        }
};

//Hybrid Inheritance

 //The combination of more than one inheritance.

class School{
    public:
        void teacher(){
            cout<<"Teacher"<<endl;
        }
        void student(){
            cout<<"Student"<<endl;
        }
};

class Collage{
    public:
        void professor(){
            cout<<"Professor"<<endl;
        }
};

class Male: public School, public Collage{

};

class Female: public School, public Collage{

};

class Student: public School{

};



int main() {

    Dog doggy;

    doggy.speak();

    Pizza cheezy;

    cheezy.taste();

    Eat healthy;

    healthy.apple();
    healthy.tomato();

    B b1;
    C c1;

    b1.func1();
    b1.func2();

    c1.func1();
    c1.func3();

    School sch1;
    Collage clg1;
    Male Rocky;
    Female Radha;
    Student s1;

    sch1.teacher();
    clg1.professor();
    Rocky.professor();
    Rocky.teacher();
    Radha.professor();
    Radha.teacher();
    s1.student();
    

    return 0;
}