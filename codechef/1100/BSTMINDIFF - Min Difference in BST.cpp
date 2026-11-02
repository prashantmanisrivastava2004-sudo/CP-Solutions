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

int inorderTraverse(Node* root, int& val, int& min_dif);

class Solution {
  public:
    void minDifference(Node* root) {
      int min_dif = INT_MAX, val = -1;
      int ans =  inorderTraverse(root, val, min_dif);
      cout << ans;
    }   
};

int inorderTraverse(Node* root, int& val, int& min_dif) {
    if (root->left != NULL)
        inorderTraverse(root->left, val, min_dif);
    if (val >= 0) 
        min_dif = min(min_dif, root->val - val);
    val = root->val;
    if (root->right != NULL) 
        inorderTraverse(root->right, val, min_dif);
    return min_dif;
}

