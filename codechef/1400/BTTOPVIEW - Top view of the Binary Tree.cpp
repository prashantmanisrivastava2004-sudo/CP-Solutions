// struct Node {
//     int val;
//     Node* left;
//     Node* right;
//     Node(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
  public:
    void topView(Node* root) {
        queue<pair<int,Node*>>q;
        map<int,int>mp;
        q.push({0,root});
        while(!q.empty()){
            Node* curr = q.front().second;
            int currHD = q.front().first;
            q.pop();
            
            if(mp.find(currHD)==mp.end()){
                mp[currHD] = curr->val;
            }
            if(curr->left != NULL){
                q.push({currHD-1, curr->left});
            }
            if(curr->right != NULL){
                q.push({currHD+1, curr->right});
            }
        }
        for(auto it: mp){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
};
