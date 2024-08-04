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

    //printing doubly linked list before adding node
    Node *temp = Head;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }
    cout<<endl;

    //Insert Node in a particular position.
    //Inserting 7 at last position.
    int position = 5;

    //Insert at start (position = 0)
    if(position == 0){

        //If list not exist
        if(Head == NULL)
            Head = new Node(7);

        else{//If list exist
            Node *temp = new Node(7);
            temp ->next = Head;
            Head ->prev = temp;
            Head = temp;
        }

    }else{

        Node *curr = Head;
        while(--position){
        curr = curr ->next;
        }

        //Insert at last
        if(curr ->next == NULL){
            Node *temp = new Node(7);
            curr ->next = temp;
            temp ->prev = curr;
        }
        else{//Insert between list

            temp = new Node(7);
            temp ->prev = curr;
            temp ->next = curr ->next;
            curr ->next = temp;
            temp ->next ->prev = temp;
        }
    }

    //printing doubly linked list after adding node
    temp = Head;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }

    return 0;
}