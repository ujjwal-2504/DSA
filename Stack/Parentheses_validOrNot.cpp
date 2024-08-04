#include<iostream>
#include<stack>
using namespace std;

// Using stack.
bool check(string s){

    stack<char> p;

    for(int i = 0; i < s.size(); i++){
    
        // opening
        if(s[i] == 40){
            p.push(s[i]);
        }
        // closing
        else{
            if(p.empty())
                return 0;
            else
                p.pop();
        }
    }

    return p.empty();
}

bool Check(string s){

    stack<char> store;

    for(int i = 0; i < s.size(); i++){

        if(s[i] == '(')
            store.push(s[i]);
        else{
            if(store.empty())
                return false;
            else
                store.pop();
        }

    }

    return store.empty();
    
}

// without using stack
bool check2(string s){

    int open = 0;

    for(int i = 0; i < s.size(); i++){

        if(s[i] == '('){
            open++;
        }
        else{
            if(open)
                open--;
            else
                return 0;
        }
    }

    return (open == 0);
}

int main() {

    string str1 = "(()())())";
    string str2 = "(()())";
    string str3 = "(())())";
    string str4 = "((())())";
    string str5 = "(())())(((()))))";
    string str6 = "(())())(";
    string str7 = "";

    // by using stack: Space complexity = O(n)
    cout<<Check(str1)<<endl;
    cout<<Check(str2)<<endl;
    cout<<Check(str3)<<endl;
    cout<<Check(str4)<<endl;
    cout<<Check(str5)<<endl;
    cout<<Check(str6)<<endl;
    cout<<Check(str7)<<endl;

    cout<<endl;
    //without using stack: Space complexity = O(1)
    cout<<check2(str1)<<endl;
    cout<<check2(str2)<<endl;
    cout<<check2(str3)<<endl;
    cout<<check(str4)<<endl;
    cout<<check(str5)<<endl;
    cout<<check(str6)<<endl;
    cout<<check(str7)<<endl;

    return 0;
}