#include<iostream>
#include<deque>
using namespace std;

class Stack {

    deque<int> dq;
    public:

    void push(int val) {
        dq.push_back(val);
    }

    void pop() {
        dq.pop_back();
    }

    int top() {
        return dq.back();
    }

    int size() {
        return dq.size();
    }

    bool empty() {
        return dq.empty();
    }
};

int main() {

    Stack st;

    st.push(21);
    st.push(26);
    st.push(31);
    st.push(42);
    st.push(35);
    st.push(578);
    st.push(45);

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    st.pop();
    st.pop();

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    return 0;
}