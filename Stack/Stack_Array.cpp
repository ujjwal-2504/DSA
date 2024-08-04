#include<iostream>
using namespace std;

// Implementation with array
class Stack {

    int *arr;
    int size;
    int top;
    
    public:

        bool flag = 1;

        // Constructor
        Stack(int s) {
            size = s;
            top = -1;
            arr = new int[s];
        }

        // Push
        void push(int value) {
            if(top == size - 1){
                cout<<"Stack overflow"<<endl;
                return;
            }
            else{
                top++;
                arr[top] = value;
                cout<<"Pushed "<<value<<" into the stack"<<endl;
                flag = 0;
            }
        }

        // Pop
        void pop() {
            if(top == -1){
                cout<<"Stack underflow"<<endl;
                return;
            }
            else{
                top--;
                cout<<"Popped "<<arr[top+1]<<" from the stack"<<endl;

                if(top == -1)
                    flag = 1;
            }
        }

        // Peek
        int peek(){
            if(top == -1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }

        // IsEmpty
        bool isEmpty(){
            return top == -1;
        }

        // IsSize
        int isSize(){

            return top+1;
        }
};

int main() {

    // Created a stack S1.
    Stack S1(5);

    // Pushed or insert the values into the stack. 
    S1.push(5);
    S1.push(6);
    S1.push(10);
    S1.push(-1);

    // Poping or deleting the values present in stack.
    S1.pop();
    S1.pop();
    S1.pop();
    S1.pop();

    // checking peek element.
    int value = S1.peek();
    if(S1.flag == 0)
        cout<<value<<endl;

    // Checking if stack is empty.
    cout<<S1.isEmpty()<<endl;

    // Checking actual size of stack.
    cout<<S1.isSize()<<endl;
    

    return 0;
}