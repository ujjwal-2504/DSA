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

// Printing
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

    queue<Node *> q;
    int x, first, second;

    cout<<"Enter the root value: ";
    cin>>x;

    Node *root = new Node(x);
    q.push(root);

    // Building the Binary Tree level by level

    while(!q.empty()) {

        Node *temp = q.front();
        q.pop();

        cout<<"Enter left child of " <<temp->data<<": ";
        cin>>first; // Left Child/Node

        if(first != -1){
            temp ->left = new Node(first);
            q.push(temp ->left);
        }

        cout<<"Enter right child of " <<temp->data<<": ";
        cin>>second; // Right Child/Node

        if(second != -1){
            temp ->right = new Node(second);
            q.push(temp ->right);
        }

    }

    q.push(root);

    LevelOrder(q);

    return 0;
}