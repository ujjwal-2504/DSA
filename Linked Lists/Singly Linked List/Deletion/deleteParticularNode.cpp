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
    int x = 1;

    Node *Head = NULL;
    Head = CreateLinkedList(arr1, 0, 5);
    
    //Delete particular node x

    if(x == 1){
        Node *temp = Head; 
        Head = Head ->next;
        delete temp;
    }else{
        Node *curr = Head;
        Node *prev = NULL;
        x--;
        while(x--){
            prev = curr;
            curr = curr ->next;
        }
        prev ->next = curr ->next;
        delete curr;
    }


    Node *temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }

    return 0;
}
