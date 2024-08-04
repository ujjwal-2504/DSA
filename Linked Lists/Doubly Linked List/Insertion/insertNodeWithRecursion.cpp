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

    //printing doubly linked list
    Node *temp = Head;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }

    return 0;
}