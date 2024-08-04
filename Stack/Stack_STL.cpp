#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<int>S;

    S.push(90);
    S.push(3);
    S.push(5);
    S.push(2);

    cout<<"Top element: "<<S.top()<<endl;
    cout<<"Size: "<<S.size()<<endl;
    S.pop();
    cout<<"Top element: "<<S.top()<<endl;
    cout<<"Size: "<<S.size()<<endl;
    cout<<"Empty?? : "<<S.empty()<<endl;

    return 0;
}