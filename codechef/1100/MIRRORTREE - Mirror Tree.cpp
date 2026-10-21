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
    bool solve(Node* left, Node* right){
        if(left==NULL && right==NULL) return true;
        if(left==NULL || right==NULL) return false;
        return solve(left->left,right->right)&&solve(left->right, right->left);
    }
    void isMirrorTree(Node* root) {
     if(!root){
         cout<<"Yes"<<endl;
         return;
     }
     solve(root->left,root->right)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
};
