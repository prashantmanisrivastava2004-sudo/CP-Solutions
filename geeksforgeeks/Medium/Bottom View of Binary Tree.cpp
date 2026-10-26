/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        vector<int>ans;
        if(!root) return ans;
       queue<pair<Node*,int>>q;
       map<int,int>mp;
       q.push({root,0});
       while(!q.empty()){
           Node* curr = q.front().first;
           int currHd = q.front().second;
           q.pop();
           mp[currHd]=curr->data;
           
           if(curr->left){
               q.push({curr->left,currHd-1});
           }
           if(curr->right){
               q.push({curr->right,currHd+1});
           }
       }
       for(auto it:mp){
           ans.push_back(it.second);
       }
       return ans; 
    }
};