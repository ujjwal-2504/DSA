#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
    
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main() {


    Node *Head = NULL;

    if(Head == NULL)
            Head = new Node(5);
    else{
        Node *temp = new Node(5);
        temp ->next = Head;
        Head ->prev = temp;
        Head = temp;
    }

    // //printing doubly linked list
    // Node *temp = Head;
    // while(temp){
    //     cout<<temp ->data<<" ";
    //     temp = temp ->next;
    // }


    // Inserting Node at starting of doubly linked list

    //Convert array to doubly linked list
    int arr1[] = {2, 3, 4, 5, 6, 7, 8};
    
    for(int i = 6; i != 0; i--) {

        if(Head == NULL)
            Head = new Node(arr1[i]);
        else{
            Node *temp = new Node(arr1[i]);
            temp ->next = Head;
            Head ->prev = temp;
            Head = temp;
        }
    }

    //printing doubly linked list
    Node *temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }


    return 0;
}