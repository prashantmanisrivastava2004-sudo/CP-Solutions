// struct Node {
//     int val;
//     Node* left;
//     Node* right;
//     Node(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
  public:
    int minDepth(Node* root) {
        if(root==NULL) return 0;
        if(root->left==NULL) return 1+minDepth(root->right);
        if(root->right==NULL) return 1+minDepth(root->left);
        return 1+ min(minDepth(root->left),minDepth(root->right));
    }
};
