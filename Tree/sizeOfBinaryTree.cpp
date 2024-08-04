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

// Method 1 Using Pre-Order traversal
  
void size(Node* node, int &count) {
        
    if(!node) return; // NULL
    
    count++; // Node found
    
    size(node ->left, count); // Go to Left Node
    
    size(node ->right, count); // Go to Right Node
            
}
    
int getSize(Node* node) {
    
    int count = 0;
    
    size(node, count);
    
    return count;
}

// Method 2 (Pre -Order again)
//TC = O(n) -> traversing all nodes
//SC = O(n)-> recursion
  
int getSize(Node* node) {
        
    if(!node) return 0; // NULL
        
    // 1 + Total nodes on left + Total nodes on right
    return (1 + getSize(node ->left) + getSize(node ->right));
}