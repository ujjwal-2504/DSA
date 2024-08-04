#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node *CreateLinkedList(int index, int arr[], int size) {

    //Base Case
    if(index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp ->next = CreateLinkedList(index+1, arr, size);
    return temp;

}

void PrintLinkedList(Node *Head) {

    if(Head)
        cout<<Head->data<<" ";

    PrintLinkedList(Head ->next);
        
}

int main() {

    //Creating a Circular linked list

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    //creating singly linked list
    Node *head = CreateLinkedList(0, arr, 7);


    Node *tail = head;
    while(tail ->next){
        tail = tail ->next;
    }

    //Connecting last node of list to first node of list.
    tail ->next = head;


    return 0;
}