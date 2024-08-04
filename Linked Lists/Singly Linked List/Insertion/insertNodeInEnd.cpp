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

    int arr1[] = {1, 2, 3, 4, 5};

    Node *Head = NULL;
    Node *Tail = NULL;

    for(int i = 4; i >= 0; i--){
        
        if(Head == NULL){
            Head = new Node(arr1[i]);
        }else{
            Node *temp;
            temp = new Node(arr1[i]);
            temp -> next = Head;
            Head = temp;
        }
    }

    //To sending Tail at the end of linked list
    Tail = Head;
    while(Tail->next != NULL){
        Tail = Tail->next;
    }

    //add arr2 in the end of the above linked list

    int arr2[] = {10, 9, 8, 7, 6};

    

    //Sending Tail at the end of the existing linked list
    
    // The below code has high time complexity
    // for(int i = 0; i <= 4; i++){

    //     if(Head == NULL){
    //         Head = new Node(arr2[i]);
    //     }else{
    //         Node *Tail = Head;
    //         while(Tail->next != NULL){
    //             Tail = Tail ->next;
    //         }
    //         // Node *temp = new Node(arr2[i]);
    //         // Tail ->next = temp; //OR

    //         Tail ->next = new Node(arr2[i]);
    //     }
    // }

    //Doing little changes and reducing time complexity

    for(int i = 0; i <= 4; i++){
        if(Head == NULL){
            Head = new Node(arr2[i]);
            Tail = Head;
        }else{
            Tail ->next = new Node(arr2[i]);
            Tail = Tail ->next;
        }
    }

    //printing newly formed linked list

    Node *temp = Head;

    while(temp){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    

    return 0;
}