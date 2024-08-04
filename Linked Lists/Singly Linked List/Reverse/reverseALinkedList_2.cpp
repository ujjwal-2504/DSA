#include<iostream>
using namespace std;

class ListNode{

    public:
        int value;
        ListNode *next;

    ListNode(int data) {
        value = data;
        next = NULL;
    }
};

ListNode *CreateLinkedList(int arr[], int index, int size){

    //Base case
    if(index == size){
        return NULL;
    }

    ListNode *temp = new ListNode(arr[index]);
    temp ->next = CreateLinkedList(arr, index+1,size);
    return temp;
}


int main() {

    int arr1[] = {1, 20, 30, 43, 56, 67, 77};

    ListNode *Head = NULL;
    Head = CreateLinkedList(arr1, 0, 7);

    ListNode *temp = Head;

    cout<<"Linked list before reversed"<<endl;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }
    cout<<endl;

    //Reverse a linked list
    
    ListNode *curr = Head; //current node
    ListNode *prev = NULL; //previous node
    ListNode *fut = NULL; //future node
    while(curr){
        fut = curr ->next;
        curr ->next = prev;
        prev = curr;
        curr = fut;
    }
    Head = prev;

    temp = Head;
    cout<<"Linked list after reversed"<<endl;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }


    return 0;
}