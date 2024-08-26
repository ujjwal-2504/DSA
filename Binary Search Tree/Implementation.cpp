#include<iostream>
using namespace std;

class Node {
    
    public:

        int data;
        Node *left, *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Creating a binary search tree.

// Time Complexity = O(n*n) (worst case)
// TC can be decreased
// Space Complexity = O(n).

Node *insert(Node *node, int val) {

    if(!node) {
        Node *root = new Node(val);
        cout<<val<<" is inserted"<<endl;
        return root;
    }

    if(val < node ->data) {
        cout<<val<<" < "<<node ->data<<", Go to left part"<<endl;
        node ->left = insert(node ->left, val);
    }
    else{
        cout<<val<<" >= "<<node ->data<<", Go to right part"<<endl;
        node ->right = insert(node ->right, val);
    }

    return node;
}

void PreOrder(Node *root) {

    if(!root) return;

    cout<<root ->data<<" ";  // N
    PreOrder(root ->left);  // L
    PreOrder(root ->right);// R
}

void InOrder(Node *root) {

    if(!root) return;

    InOrder(root ->left);    // L
    cout<<root ->data<<" "; // N
    InOrder(root ->right); // R
}

int main() {

    int arr[] = {11, 8, 6, 7, 9, 10, 30, 5, 8, 12};
    Node *root = NULL;

    for(int i = 0; i < 10; i++) {
        root = insert(root, arr[i]);
    }

    cout<<"\nPre-Order Traversal: \n";
    PreOrder(root);

    cout<<"\nIn-Order Traversal: \n";
    InOrder(root); // Output in sorted order

    return 0;
}