#include<iostream>
using namespace std;

class Node {

  public: 
    int data, height;
    Node *left, *right;

    Node(int value) {

      data = value;
      height = 1;
      left = right = NULL;
    }
};

int getHeight(Node *root) {

  if(!root) return 0;

  return root ->height;
}

int checkBalance(Node *root) {

  return getHeight(root ->left) - getHeight(root ->right);

}

// Right rotation
Node *rightRotation(Node *root) {

  Node *child = root ->left;
  Node *childRight = child ->right;

  child ->right = root;
  root ->left = childRight;
  
  // Update height
  root ->height = 1 + max(getHeight(root ->left), getHeight(root ->right));
  child ->height = 1 + max(getHeight(child ->left), getHeight(child ->right));


  return child;
}

// Left rotation
Node *leftRotation(Node *root) {

  Node *child = root ->right;
  Node *childLeft = child ->left;

  child ->left = root;
  root ->right = childLeft;
  
  // Update height
  root ->height = 1 + max(getHeight(root ->left), getHeight(root ->right));
  child ->height = 1 + max(getHeight(child ->left), getHeight(child ->right));


  return child;
}

// Time Complexity:
//   Of inserting 1 element -> O(log n).
//   Of insertion n element -> O(n log n).


Node *insert(Node *root, int key) {

  // If node doesn't exist
  if(!root) return new Node(key);

  // If node exist

  if(root ->data > key) 
    root ->left = insert(root->left, key);

  else if(root ->data < key) 
    root ->right = insert(root ->right, key);

  else 
    return root; // Duplicate element not allowed

  // Update height
  root ->height = 1 + max(getHeight(root ->left), getHeight(root ->right));

  // Check Balancing
  int balance = checkBalance(root);

  // Left Left case
  if(balance > 1 && key < root ->left ->data) {
    return rightRotation(root);
  }

  // Right Right case
  else if(balance < -1 && key > root ->right ->data) {
    return leftRotation(root);
  }

  // Left Right case
  else if(balance > 1 && key > root ->left ->data) {
    root ->left = leftRotation(root->left);
    return rightRotation(root);

  }

  // Right Left case
  else if(balance < -1 && key < root ->right ->data) {
    root ->right = rightRotation(root ->right);
    return leftRotation(root);
  }

  // No Unbalance
  else return root;

}

void preorder(Node *root) {

  if(!root) return;

  cout<<root ->data<<" ";
  preorder(root ->left);
  preorder(root ->right);

}

void inorder(Node *root) {

  if(!root) return;

  inorder(root ->left);
  cout<<root ->data<<" ";
  inorder(root ->right);

}

int main() {

  // Duplicate element not allowed

  Node *root = NULL;

  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 80);
  root = insert(root, 30);
  root = insert(root, 40);
  root = insert(root, 5);
  root = insert(root, 90);
  root = insert(root, 50);

  cout<<"Preorder: ";
  preorder(root);
  cout<<endl;

  cout<<"Inorder: ";
  inorder(root);
  cout<<endl;

  return 0;
}
