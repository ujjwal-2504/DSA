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

Node *deleteNode(Node *curr, int x){

    //Base Case
    if(x == 1){
        Node *temp = curr ->next;
        delete curr;
        return temp;
    }else{
        curr ->next = deleteNode(curr ->next, x-1);
        return curr;
    }

}


int main() {

    int arr1[] = {2, 3, 4, 5, 6};
    int x = 4;

    Node *Head = NULL;
    Head = CreateLinkedList(arr1, 0, 5);
    
    //Delete particular node x

    Head = deleteNode(Head, x);

    Node *temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }

    return 0;
}
