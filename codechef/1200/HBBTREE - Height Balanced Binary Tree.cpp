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
    int height(Node * root) {
        if (!root) return -1;
        return 1 + max(height(root -> left), height(root -> right));
    }
    
    bool isheight(Node* root){
        if(!root) return true;
        int lefth = height(root->left);
        int righth = height(root->right);
        if(abs(lefth-righth)>1){
            return false;
        }
        return isheight(root->left)&&isheight(root->right);
    }

    void isHeightBalanced(Node * root) {
        if(isheight(root)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
};
