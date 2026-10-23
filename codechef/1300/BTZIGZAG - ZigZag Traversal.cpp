// struct Node {
//     int val;
//     Node* left;
//     Node* right;
//     Node(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
    public: void zigzagTraversal(Node * root) {
        if (!root) return;
        queue < Node * > q;
        q.push(root);
        bool leftToRight = true;
        while (!q.empty()) {
            int size = q.size();
            vector < int > level(size);
            for (int i = 0; i < size; i++) {
                Node * curr = q.front();
                q.pop();
                int index = leftToRight ? i : (size - i - 1);
                level[index] = curr -> val;
                if (curr -> left != NULL) {
                    q.push(curr -> left);
                }
                if (curr -> right != NULL) {
                    q.push(curr -> right);
                }
            }
            for (int i = 0; i < size; i++) {
                cout << level[i] << " ";
            }
            cout << endl;
            leftToRight = !leftToRight;
        }


    }
};
