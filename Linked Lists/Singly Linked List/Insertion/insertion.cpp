#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main() {

    // Node *Head;
    // Head = new Node(4);

    // cout<<Head ->data<<endl;
    // cout<<Head ->next<<endl;

    //Insert the Node at beginning

    Node *Head;
    Head = NULL;

    int arr1[5] = {2, 3, 4, 5, 6};

    for(int i = 0; i < 5; i++){
        
        if(Head == NULL){
            Head = new Node(arr1[i]);
        }else{
            Node *temp;
            temp = new Node(arr1[i]);
            temp -> next = Head;
            Head = temp;
        }
    }

    // Print linked list

    Node *temp = Head;
    while(temp){
        cout<<temp ->data<<" ";
        temp = temp->next;
    }

    return 0;
}
