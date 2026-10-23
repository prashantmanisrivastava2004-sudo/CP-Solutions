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
    Node* buildTreepre(vector<int> &preorder,int ps, int pe, vector<int>&inorder, int is, int ie, map<int,int>&mp){
        if(ps>pe || is>ie) return NULL;
        Node* root = new Node(preorder[ps]);
        int inroot = mp[preorder[ps]];
        int left = inroot-is;
        root->left = buildTreepre(preorder,ps+1, ps+left, inorder, is, inroot-1, mp);
        root->right = buildTreepre(preorder,ps+left+1, pe, inorder, inroot+1, ie, mp);
        return root;
    }
    Node* constructBinaryTree(vector<int> &preorder, vector<int>&inorder) {
       if(preorder.size() != inorder.size()) return NULL;
       map<int,int>mp;
       for(int i=0; i<inorder.size(); i++){
           mp[inorder[i]]=i;
       }
       return buildTreepre(preorder,0, preorder.size()-1, inorder, 0, inorder.size()-1,mp);
    }
};
