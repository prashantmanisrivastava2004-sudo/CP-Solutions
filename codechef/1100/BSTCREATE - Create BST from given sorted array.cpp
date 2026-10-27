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
    Node* helper(vector<int> &nums, int st, int end){
        if(st>end) return NULL;
        int mid = st+(end-st)/2;
        Node* root = new Node(nums[mid]);
        root->left = helper(nums,st,mid-1);
        root->right = helper(nums,mid+1,end);
        return root;
    }
    Node* createBST(vector<int> &nums) {
      return helper(nums,0,nums.size()-1);
    }
};
