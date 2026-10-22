// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };


TreeNode * deserialize(vector < int > & arr) {
   if(arr.empty() || arr[0]==-1) return NULL;
   TreeNode* node = new TreeNode(arr[0]);
   queue<TreeNode*>q;
   q.push(node);
   int i=1;
   while(!q.empty() && i<arr.size()){
       TreeNode* curr = q.front();
       q.pop();
       
       if(arr[i] != -1){
           curr->left = new TreeNode(arr[i]);
           q.push(curr->left);
       }
       i++;
       if(i<arr.size() && arr[i] != -1){
           curr->right = new TreeNode(arr[i]);
           q.push(curr->right);
       }
       i++;
   }
  return node;  
}

vector < int > serialize(TreeNode * root) {
    vector<int>ans;
    if (!root) return ans;
    queue <TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode * curr = q.front();
        q.pop();
        
        if(curr == NULL){
            ans.push_back(-1);
            continue;
        }

        ans.push_back(curr -> val);
         q.push(curr -> left);
         q.push(curr -> right);
    }
        while (!ans.empty() && ans.back() == -1) {
        ans.pop_back();
        }
         return ans;
    }
   


