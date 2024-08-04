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

    //Inserting Node at the end
    if(Head == NULL)
        Head = new Node(10);
    else{
        Node *curr = Head;
        while(curr ->next != NULL){
            curr = curr ->next;
        }
        Node *temp = new Node(23);
        curr ->next = temp;
        temp ->prev = curr;
    }

    // Inserting Node at end of doubly linked list

    //Convert array to doubly linked list
    int arr1[] = {2, 3, 4, 5, 6, 7, 8};

    Node *Tail = Head;
    while(Tail ->next){
        Tail = Tail ->next;
    }

    for(int i = 0; i < 7; i++) {

        if(Head == NULL)
            Head = new Node(arr1[i]);
        else{
            Node *temp = new Node(arr1[i]);
            Tail ->next = temp;
            temp ->prev = Tail; 
            Tail = temp;
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