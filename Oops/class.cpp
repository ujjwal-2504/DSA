#include<iostream>
#include<string.h>
using namespace std;

class Hero{

// properties
    private:
    int health;

    public:
    char *name;
    char level;

    static int timeToComplete;

    Hero(){
        name = new char[100];
        cout<<"Simple Constructor called"<<endl;
    }

    Hero(int health){
        this -> health = health;
    }

    Hero(int health, int level){
        this -> health = health;
        this -> level = level;
    }

    // Copy Constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this-> name = ch;
        cout<<"Copy Constructor called "<<endl;
        this-> health = temp.health;
        this-> level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this-> name<<" ,";
        cout<<"Health: "<<this-> health<<" ,";
        cout<<"Level: "<<this-> level<<" ]";
        cout<<endl<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char L){
        level = L;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    ~Hero(){
        cout<<"Destructor bhai is called"<<endl;
    }


};

int Hero::timeToComplete = 5;

int main(){

    // cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

    // Hero a;
    // cout<<a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout<<b.timeToComplete<<endl;

    // cout<<Hero::timeToComplete<<endl;










/*
    //statically
    Hero a;

    //dynamically
    Hero *b = new Hero();
    //Manually destructor called
    delete b;

*/

    /*

    Hero hero1;

    hero1.setHealth(70);
    hero1.setLevel('A');
    char name[7] = "Ujjwal";
    hero1.setName(name);

    // hero1.print();

    // Use default copy constructor -> shallow copy
    // Use our copy constructor -> deep copy

    Hero hero2(hero1); //Or
    // Hero hero2 = hero1;

    // hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

    hero1 = hero2;
    hero1.print();
    hero2.print();
    */

/*
    Hero panther(50, 'R');
    panther.print();

    // tiger.health = panther.health;
    // tiger.level = panther.level;

    //Copy Constructor
    Hero tiger(panther);
    tiger.print();

*/

/*
    //Constructor
    // Hero();

    // object created statically
    Hero obj(300);
    // cout<<"address of obj is "<<&obj<<endl;
    obj.print();



    // object created dynamically
    Hero *d = new Hero(10);

    Hero temp(30,'A');
    temp.print();

*/

/*
    //static allocation
    Hero a;

    a.setLevel('A');
    a.setHealth(100);

    cout<<"Level = "<<a.level<<endl;
    cout<<"Health = "<<a.getHealth()<<endl;

    //dynamic allocation
    Hero *b = new Hero;

    b->setLevel('B');
    b->setHealth(110);
    cout<<"Level = "<<(*b).level<<endl;
    cout<<"Health = "<<(*b).getHealth()<<endl;

    cout<<"Level = "<<b->level<<endl;
    cout<<"Health = "<<b->getHealth()<<endl;
*/


    //creation of object h1
    // Hero krishna;

    // krishna.health = 90;
    // krishna.level = 'G';

    // krishna.setHealth(99);
    // krishna.setLevel('G');

    // cout<<"Health: "<<krishna.getHealth()<<endl;
    // cout<<"Level: "<<krishna.getLevel()<<endl;

    // cout<<"Health: "<<krishna.health<<endl;
    // cout<<"Level: "<<krishna.level<<endl;

    // cout<<"The size of h1 is "<<sizeof(h1)<<endl;
    return 0;
}
