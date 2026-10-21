/*
struct Node {
    int val; 
    Node *left;
    Node *right;

    Node(int node_value) {
        val = node_value;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    int heightOfBinaryTree(Node* root) {
        if(!root) return -1;
        return 1+max(heightOfBinaryTree(root->left),heightOfBinaryTree(root->right));
    }
};
