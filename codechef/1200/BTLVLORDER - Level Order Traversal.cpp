class Solution {
    public: void levelOrder(Node * root) {
        if (!root) return;
        queue <Node*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();

                cout << curr -> val<<" " ;
                if (curr -> left) {
                    q.push(curr -> left);
                }
                if (curr -> right) {
                    q.push(curr -> right);
                }
            }
            cout << endl;
        }
    }
};
