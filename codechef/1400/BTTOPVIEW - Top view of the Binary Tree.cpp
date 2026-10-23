// struct Node {
//     int val;
//     Node* left;
//     Node* right;
//     Node(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
  public:
    void topView(Node* root) {
        queue<pair<Node*,int>>q;
        map<int,int>mp;
        q.push({root,0});
        while(!q.empty()){
            Node* curr = q.front().first;
            int currHD = q.front().second;
            q.pop();
            
            if(mp.find(currHD)==mp.end()){
                mp[currHD] = curr->val;
            }
            if(curr->left != NULL){
                q.push({curr->left, currHD-1});
            }
            if(curr->right != NULL){
                q.push({curr->right, currHD+1});
            }
        }
        for(auto it: mp){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
};
