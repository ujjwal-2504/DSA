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

    //Inserting Node in a particular position

    int x = 3; //Insert position
    int data = 20;

    Node *temp2 = Head;

    for(int i = 1; i <= x-2; i++){
        temp2 = temp2 ->next;
    }

    Node *temp3 = new Node(data);
    temp3 ->next = temp2 ->next;
    temp2 ->next = temp3;

    //Printing the linked list after inserting element
    cout<<"After adding node"<<endl;

    temp2 = Head;
    while(temp2){
        cout<<temp2 ->data<<" ";
        temp2 = temp2 ->next;
    }
    

    return 0;
}