// struct Node {
//     int val;
//     Node* left;
//     Node* right;
//     Node(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
    public: void zigzagTraversal(Node * root) {
        queue < Node * > q;
        q.push(root);
        bool leftToright = true;
        while (!q.empty()) {
            int n = q.size();
            vector < int > level(n);
            for (int i = 0; i < n; i++) {
                Node * curr = q.front();
                q.pop();

                int index = leftToright ? i : (n - 1 - i);
                level[index] = curr -> val;

                if (curr -> left != NULL) {
                    q.push(curr -> left);
                }
                if (curr -> right != NULL) {
                    q.push(curr -> right);
                }
            }
            for (int i = 0; i < n; i++) {
                cout << level[i] << " ";
            }
            cout << endl;
            leftToright = !leftToright;

        }
    }
};
