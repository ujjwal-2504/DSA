#include<iostream>
using namespace std;

class Customer{

    string name;
    int acc_num;
    int ammount;

    public: 

    // default construtor.
    Customer() {
        cout<<"This is a constructor"<<endl;
    }

    // paramiterised constructor

    // Customer(string name, int accNo, int amt){

    //     this ->name = name;
    //     this ->acc_num = accNo;
    //     this ->ammount = amt;
    // }

    // Constructor Overloading
    Customer(string name, int accNo){

        this ->name = name;
        this ->acc_num = accNo;
        ammount = 200;
    }

    // Inline Construstor

    inline Customer(string name, int accNo, int amt): name(name), acc_num(accNo), ammount(amt){

    }

    // copy constructor

    Customer(Customer &a){
        name = a.name;
        acc_num = a.acc_num;
        ammount = a.ammount;
    }

    void display() {
        cout<<name<<" "<<acc_num<<" "<<ammount<<endl;
    }
};

int main() {

    Customer c1("Ujjwal", 49201);

    Customer c2("Ujjwal", 234562, 5000000);

    // copy construstor
    Customer c3(c1);

    Customer c5;
    c5 = c2;

    c1.display();
    c2.display();
    c3.display();
    c5.display();

    

    return 0;
}