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
  
    int search(vector<int>&preorder, vector<int>&inorder, int val){
        for(int i=0; i<inorder.size(); i++){
            if(inorder[i]==val){
                return i;
            }
        }
        return -1;
    }
  
    Node* buildTree(vector<int>&preorder,vector<int>&inorder,int &preidx, int left, int right){
        if(left>right)return NULL;
        Node* root = new Node(preorder[preidx]);
        int inidx = search(preorder,inorder,preorder[preidx]);
        preidx++;
        root->left = buildTree(preorder,inorder,preidx,left,inidx-1);
        root->right = buildTree(preorder,inorder,preidx,inidx+1, right);
        return root;
    }
    Node* constructBinaryTree(vector<int> &preorder, vector<int> inorder) {
       int preidx = 0;
       int n = inorder.size();
      return buildTree(preorder,inorder, preidx, 0, n-1);
    }
};
