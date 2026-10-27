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
    Node* lcaInBST(Node* root, int p, int q) {
      if(!root) return NULL;
      if(root->val > p && root->val > q){
          return lcaInBST(root->left,p,q);
      }
      else if(root->val < p && root->val < q){
          return lcaInBST(root->right,p,q);
      }
      
      return root;
      
    }
};
