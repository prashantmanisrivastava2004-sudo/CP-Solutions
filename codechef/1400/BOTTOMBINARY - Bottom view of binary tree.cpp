// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
public:
    vector<int> bottomView(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        vector<int>ans;
        map<int,int>mp;
        q.push({root,0});
        while(!q.empty()){
            TreeNode*curr = q.front().first;
            int currHD = q.front().second;
            q.pop();
            mp[currHD] = curr->val;
            if(curr->left != NULL){
                q.push({curr->left,currHD-1});
            }
            if(curr->right != NULL){
                q.push({curr->right, currHD+1});
            }
            
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};

