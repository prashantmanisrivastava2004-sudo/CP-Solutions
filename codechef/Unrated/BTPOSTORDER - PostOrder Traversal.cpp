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
    void postOrderTraversal(Node* root) {
       if(!root){
           return;
       }
       postOrderTraversal(root->left);
       postOrderTraversal(root->right);
       cout<<root->val<<" ";
    }
};
