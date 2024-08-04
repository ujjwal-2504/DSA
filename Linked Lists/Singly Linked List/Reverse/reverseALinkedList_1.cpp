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
    //I solved this question in leetcode by using vector array
    // In this approach only data is reversed in linked list not node

    temp = Head;
    int tempArr[7];
    int i = 0;

    //storing data of linked list into temprory array
    while(temp != NULL){
        tempArr[i]= temp ->value;
        temp = temp ->next;
        i++;
    }

    i--; // i = 6
    temp = Head;

    //storing the data from tempArr to linked list in reversed order
    while(temp){
        temp ->value = tempArr[i];
        temp = temp ->next;
        i--;
    }

    temp = Head;
    cout<<"Linked list after reversed"<<endl;
    while(temp){
        cout<<temp ->value<<" ";
        temp = temp ->next;
    }
    cout<<endl;




    return 0;
}