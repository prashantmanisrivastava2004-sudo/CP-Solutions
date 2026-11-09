class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty())
            return NULL;

        TreeNode* root = new TreeNode(preorder[0]);
        vector<int> left, right;

        for (int i = 1; i < preorder.size(); i++) {
            if (preorder[i] < preorder[0])
                left.push_back(preorder[i]);
            else
                right.push_back(preorder[i]);
        }

        root->left = bstFromPreorder(left);
        root->right = bstFromPreorder(right);

        return root;
    }
};
