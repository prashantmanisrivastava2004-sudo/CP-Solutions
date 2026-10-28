// struct Node {
//     int val;
//     Node* left;
//     Node* right;
//     Node(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
    public:

        int getPredecessor(Node * root, int x) {
            Node * curr = root;
            Node * pred = NULL;
            while (curr != NULL) {
                if (curr -> val >= x) {
                    curr = curr -> left;
                }
                else {
                    pred = curr;
                    curr = curr -> right;
                }
            }
            return pred == NULL ? -1 : pred->val;
        }
};
