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
    int maxNodeInBST(Node* root) {
        Node* curr = root;
        while(curr->right != NULL){
            curr = curr->right;
        }
        return (curr->val);
    }
};
