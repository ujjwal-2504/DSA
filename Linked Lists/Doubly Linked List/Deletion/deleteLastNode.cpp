#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node *prev;
        Node *next;
    
    Node(int data){
        value = data;
        prev = NULL;
        next = NULL;
    }
};

Node *CreateDoublyLL(int arr[],int index, int size, Node *back){

    if(index == size)
        return NULL;

    //creating list
    Node *curr = new Node(arr[index]);
    curr ->prev = back;
    curr ->next = CreateDoublyLL(arr, index+1, size, curr);
    return curr;
}

int main() {

    int arr[] = {1, 3, 6, 8, 9};

    Node *Head = CreateDoublyLL(arr, 0, 5, NULL);
    Node *Head2 = CreateDoublyLL(arr, 0, 1,NULL);
    Node *Head3 = NULL;

    //printing doubly linked list before deletion (Head)
    Node *temp = Head;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }
    cout<<endl;

    //printing doubly linked list before deletion (Head2)
    temp = Head2;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }
    cout<<endl;

    if(Head != NULL){
        
        if(Head ->next != NULL){
            Node *curr = Head;
            while(curr ->next){
                curr = curr ->next;
            }
            curr ->prev ->next = NULL;
            delete curr;
        }
        else{ //If only one node is present
            delete Head;
            Head = NULL;
        }
        
    }
    
    //If only single node present
    
    if(Head2 != NULL){
        
        if(Head2 ->next != NULL){
            Node *curr = Head2;
            while(curr ->next){
                curr = curr ->next;
            }
            curr ->prev ->next = NULL;
            delete curr;
        }
        else{ //If only one node is present
            delete Head2;
            Head2 = NULL;
        }
        
    }

    // printing doubly linked list(Head)
    temp = Head;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }
    cout<<endl;

    // printing doubly linked list(Head2)
    temp = Head2;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }

    return 0;
}