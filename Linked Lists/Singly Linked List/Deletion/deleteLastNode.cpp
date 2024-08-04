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

    Node *Head = NULL;
    Head = CreateLinkedList(arr1, 0, 5);
    

    //Delete Last Node
    if(Head != NULL){

        //If only one node is present
        if(Head ->next == NULL){
            Node *temp = Head;
            delete temp;
            Head = NULL;
        }else{ // More than one node is present

            Node *curr = Head;
            Node *prev = NULL;
            while(curr ->next != NULL){
                prev = curr;
                curr = curr ->next;
            }
            prev ->next = NULL; // Or prev ->next = curr ->next;
            delete curr;

        }
    }

    Node *temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }

    return 0;
}
