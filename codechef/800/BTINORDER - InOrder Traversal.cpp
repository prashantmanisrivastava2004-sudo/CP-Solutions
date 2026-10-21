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
    void inOrderTraversal(Node* root) {
        if(!root) return;
        inOrderTraversal(root->left);
        cout<<root->val<<" ";
        inOrderTraversal(root->right);
    }
};
