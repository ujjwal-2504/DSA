#include<iostream>
using namespace std;

// 1. Compile time Polymorphism (Static Polymorphism)

//Function Overloading
class A {
    
    public:

        void sayMyName() {
            cout<<"Heisenberg"<<endl;
        }

        int sayMyName(string name, int n) {
            cout<< name <<endl;
            return n;
        }

        void sayMyName(string name) {
            cout<< "Hello " << name <<endl;
        }
};


//Operator Overloading

class B{
    
    public:
    int a;
    int b;

    int add() {
        return (a+b);
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;

        cout<<"Output " << value2 - value1 << endl;
    }

    void operator() () {
        cout<< "Braket Overloaded " << this->a <<endl;
    }
};

// 2. Runtime Polymorphism (Dynamic Polymorphism)

//Method Override

class Animal{

    public:
        
        void speak() {
            cout<<"Speaking"<<endl;
        }
};

 class Dog: public Animal{

    public:

        void speak() {
            cout<<"Barking"<<endl;
        }
 };

 class Duck: public Animal{

    public:

        void speak() {
            cout<<"Quack Quack"<<endl;
        }
 };


int main(){

    //Function Overloading
    // A obj;
    // obj.sayMyName();
    // obj.sayMyName("Ujjwal");
    // obj.sayMyName("Ujjwal", 90);


    //Operator Overloading
    // B obj1, obj2;

    // obj1.a = 5;
    // obj2.a = 50;

    // obj1 + obj2;
    // obj1();
    // obj2();

    //Method Overriding
    
    Animal a1;
    Dog bullDog;
    Duck Donald;

    a1.speak();
    bullDog.speak();
    Donald.speak();




    return 1;
}