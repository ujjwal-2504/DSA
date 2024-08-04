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

Node *CreateLinkedList(int arr[], int index, int size, Node *prev) {

    //Base Case
    if(index == size){
        return prev;
    }
    Node *temp = new Node(arr[index]);
    temp ->next = prev;

    return CreateLinkedList(arr, index+1, size, temp);

}

int main() {

    //Add the given array as a linked list from the start, via Recursion

    int arr1[] = {2, 3, 4, 5, 6};

    Node *Head = CreateLinkedList(arr1, 0, 5, NULL);

    //Printing the created linked list

    Node *temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }

    return 0;
}
