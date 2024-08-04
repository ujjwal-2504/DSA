#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next = NULL;
    
    Node(int value){
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

    void AddNodeInLinkedList(int value, int position, Node *head){

    //Base Case
    if(position == 1){
        Node *temp2 = new Node(value);
        temp2 ->next = head ->next;
        head ->next = temp2;
        return;
    }

    AddNodeInLinkedList(value, position-1, head ->next);
}


int main() {

    int arr1[] = {2, 3, 4, 5, 6};

    Node *Head = CreateLinkedList(arr1, 0, 5);

    //Printing the existing linked list

    cout<<"Before adding node"<<endl;
    Node *temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }

    cout<<endl;

    int x = 3, value = 87;

    AddNodeInLinkedList(value,x,Head);

    cout<<"After adding node"<<endl;
    temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }

    return 0;
}

