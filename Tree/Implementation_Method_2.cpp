#include<iostream>
using namespace std;

class Node {

    public:
        int data;
        Node *left, *right;

        Node(int val) {
            data = val;
            left = right = NULL;
        }
};

Node* BinaryTree(){

    int x;
    cin>>x;

    if(x == -1)
        return NULL;
    
    Node *temp = new Node(x);

    cout<<"Enter the left child of "<<x<<": ";
    temp ->left = BinaryTree(); //Left Node

    cout<<"Enter the right child of "<<x<<": ";
    temp ->right = BinaryTree(); //Right Node

    return temp;
}

int main() {

    Node *root;
    cout<<"Enter the root value: ";

    root = BinaryTree();
    

    return 0;
}