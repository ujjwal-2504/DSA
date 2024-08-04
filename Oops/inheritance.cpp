#include<iostream>
using namespace std;

class Human{


    protected:
        int height;
    public:
        int weight;
    private:
        int age;

    public:
        int getAge(){
            return this->age;
        }

        void setWeight(int w){
            this->weight = w;
        }

};

class Male: private Human{

    public:
        string color;
    
        void sleep(){
            cout<<"Male is sleeping"<<endl;
        }


        int getHeight(){
        return this-> height;
    }

};

class A{
    public: 
        void abc(){
            cout<<"class A";
        }
};

class B{
    public: 
        void abc(){
            cout<<"class B";
        }
};

class c: public A, public B{

};




int main(){


    c obj;
    obj.A::abc();






    // Male m1;
    // cout<<m1.height<<endl;






    /*
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;

    cout<<obj1.color<<endl;
    obj1.setWeight(22);
    cout<<obj1.weight<<endl;
    obj1.sleep();

    */



    return 0;
}