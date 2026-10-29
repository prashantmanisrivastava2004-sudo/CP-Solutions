// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
public:
    
    int sum = INT_MIN;
    
    int dia(TreeNode* root){
        if(!root) return 0;
        int lh = max(0,dia(root->left));
        int rh = max(0,dia(root->right));
        
        sum = max(sum, root->val+lh+rh);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
         dia(root);
         return sum;
        
    }
};
