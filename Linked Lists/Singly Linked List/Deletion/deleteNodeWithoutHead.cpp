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

    int arr1[] = {2, 3, 4, 5, 6};
    int x = 4;

    Node *Head = NULL;
    Head = CreateLinkedList(arr1, 0, 5);

    --x;
    Node *curr = Head;
    while(x--){
        curr = curr ->next;
    }
    
    //Delete particular node present at address curr
    Node *temp = curr ->next;
    curr ->data = temp ->data;
    curr ->next = temp ->next;
    delete temp;

    temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }

    return 0;
}
