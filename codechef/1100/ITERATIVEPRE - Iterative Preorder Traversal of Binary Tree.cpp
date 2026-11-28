class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();
            result.push_back(curr->val);

            // Push Right first so Left stays on top
            if (curr->right) st.push(curr->right);
            if (curr->left) st.push(curr->left);
        }
        return result;
    }
};
