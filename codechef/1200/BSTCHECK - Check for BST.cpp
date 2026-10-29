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
    bool helper(Node* root, long long mn, long long mx){
       if(!root) return true;
        if(root->val <= mn|| root->val >= mx){
           return false;
        }
       return helper(root->left, mn, root->val)&& helper(root->right, root->val, mx);
    }
    void isBST(Node* root) {
        if(!root) return;
        bool ans = helper(root, LLONG_MIN, LLONG_MAX);
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
};
