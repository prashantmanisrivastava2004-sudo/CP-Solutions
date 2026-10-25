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
    bool searchInBST(Node* root, int x) {
        if(!root) return false;
        
        if(root->val==x){
            return true;
        }
        
        if(root->val < x){
           return searchInBST(root->right, x);
        }
        else{
           return searchInBST(root->left, x);
        }

    }
};
