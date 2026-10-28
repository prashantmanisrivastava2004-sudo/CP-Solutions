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
    Node* iop(Node* root){
        Node* pred = root->left;
        while(pred->right != NULL){
            pred = pred->right;
        }
        return pred;
    }
    Node* deleteNode(Node* root, int x) {
        if(!root) return NULL;
        if(root->val == x){
            //leaf node
            if(root->left==NULL && root->right==NULL){
               return NULL;
            }
            //one child
            if(root->left==NULL || root->right==NULL){
                if(root->left != NULL) return root->left;
                else return root->right;
            }
            //two child then return inorder succ or predecessor
            else{
                Node* pred = iop(root);
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }
        }
        
       else if(root->val > x){
            root->left = deleteNode(root->left,x);
        }
        else{
            root->right = deleteNode(root->right,x);
        }
        return root;
    }
};
