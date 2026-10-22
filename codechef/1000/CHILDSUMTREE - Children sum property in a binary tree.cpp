// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
public:
    
    bool isChildrenSum(TreeNode* root) {
       if(!root) return true;
       if(!root->left && !root->right) return 1;
       int left =0;
       int right =0;
       if(root->left){
           left = root->left->val;
       }
       if(root->right){
           right = root->right->val;
       }
       if(root->val != left+right){
           return false;
       }
       return isChildrenSum(root->left)&&isChildrenSum(root->right);
        
    }
};

