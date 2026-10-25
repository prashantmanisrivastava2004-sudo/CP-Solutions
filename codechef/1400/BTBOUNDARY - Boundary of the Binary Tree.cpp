// struct Node {
//     int val; 
//     Node *left;
//     Node *right;

//     Node(int node_value) {
//         val = node_value;
//         left = right = NULL;
//     }
// };

class Solution {
    public: 
    void rview(Node* root, vector<int>& ans) {
        if (!root || (!root->left && !root->right)) return;

        if (root->right)
            rview(root->right, ans);
        else
            rview(root->left, ans);

        ans.push_back(root->val);
    }

    void lview(Node* root, vector<int>& ans) {
        if (!root || (!root->left && !root->right)) return;

        ans.push_back(root->val);

        if (root->left)
            lview(root->left, ans);
        else
            lview(root->right, ans);
    }

    void leaf(Node* root, vector<int>& ans) {
        if (!root) return;

        if (!root->left && !root->right) {
            ans.push_back(root->val);
            return;
        }

        leaf(root->left, ans);
        leaf(root->right, ans);
    }

    void printBoundary(Node* root) {
        if (!root) return;

        vector<int> ans;
        ans.push_back(root->val);

        lview(root->left, ans);

        leaf(root->left, ans);
        leaf(root->right, ans);

        rview(root->right, ans);

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
    }
};
