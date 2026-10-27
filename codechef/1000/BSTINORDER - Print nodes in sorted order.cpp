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
    void printNodes(Node* root) {
        if(!root) return;
        printNodes(root->left);
        cout<<root->val<<" ";
        printNodes(root->right);
    }
};
