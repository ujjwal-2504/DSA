#include<iostream>
#include<queue>
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

// Pre Order
void PreOrder(Node *root) {

    if(!root) return;
    
    cout<<root->data<<" ";    // N
    PreOrder(root ->left);   // L
    PreOrder(root ->right); // R
}

// In Order
void InOrder(Node *root) {

    if(!root) return ;

    InOrder(root ->left);    // L
    cout<<root ->data<<" "; // N
    InOrder(root ->right); // R
}

// Post Order
void PostOrder(Node *root) {

    if(!root) return;

    PostOrder(root ->left);   // L
    PostOrder(root ->right); // R
    cout<<root ->data<<" "; // N
}

// Level Order
void LevelOrder(queue<Node*> &q) {

    if(q.empty()) return;

    Node *temp = q.front();
    q.pop();

    cout<<temp->data<<" ";

    if(temp ->left)
        q.push(temp ->left);

    if(temp ->right)
        q.push(temp ->right);

    LevelOrder(q);

}

int main() {

    Node *root;
    cout<<"Enter the root value: ";

    // Binary Tree Creation
    root = BinaryTree();

    // Pre Order Traversal
    cout<<"\nPre Order: "; PreOrder(root);

    // In Order Traversal
    cout<<"\nIn Order: "; InOrder(root);

    // Post Order Traversal
    cout<<"\nPost Order: "; PostOrder(root);

    // Level Order Traversal
    queue<Node*>q;
    q.push(root);
    cout<<"\nLevel Order: "; LevelOrder(q);
    

    return 0;
}