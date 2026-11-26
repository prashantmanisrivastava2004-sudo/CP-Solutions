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
    void inorder(Node* root, vector<int>&ans){
        if(root==NULL){
            return;
        }
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
    }
    int kthLargestNode(Node* root, int k) {
        vector<int>ans;
        inorder(root,ans);
        int n = ans.size();
        return ans[n-k];
    }
};
