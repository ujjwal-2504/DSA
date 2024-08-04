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

    //printing doubly linked list before deletion (Head)
    Node *temp = Head;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }
    cout<<endl;


    //Delete the given node
    int pos = 3;

    if(Head != NULL){
        
        //Delete first node (position = 1)
        if(pos == 1){
            //for single node present in linked list
            if(Head ->next == NULL){
                delete Head;
                Head = NULL;
            }
            else{//More than one node is present
                Node *temp = Head;
                Head = Head ->next;
                Head ->prev = NULL;
                delete temp;
            }
        }
        else{
            Node *curr = Head;
            while(--pos){
                curr = curr ->next;
            }
            //delete last node
            if(curr ->next == NULL){
                curr ->prev ->next = NULL;
                delete curr;
            }
            else{ //delete node of given position
                curr ->prev ->next = curr ->next;
                curr ->next ->prev = curr ->prev;
                delete curr;
            }
        }
        
    }

    // printing doubly linked list(Head)
    temp = Head;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }
    cout<<endl;


    return 0;
}