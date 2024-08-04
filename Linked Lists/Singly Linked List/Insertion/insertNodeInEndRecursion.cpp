#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next = NULL;

    Node(int value) {
        data = value;
    }
};

Node *CreateLinkedList(int arr[], int index, int size){

    //Base case
    if(index == size){
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp ->next = CreateLinkedList(arr, index+1,size);
    return temp;
}


int main() {

    //Add the given array as a linked list from the end, via Recursion

    int arr1[] = {2, 3, 4, 5, 6};

    Node *Head = CreateLinkedList(arr1, 0, 5);

    //Printing the created linked list

    Node *temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }

    return 0;
}
