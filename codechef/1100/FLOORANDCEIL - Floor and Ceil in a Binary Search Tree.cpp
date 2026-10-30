// struct TreeNode {
//     int val;
//     TreeNode *left, *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

class Solution {
    public: pair < int,
    int > floorAndCeil(TreeNode * root, int key) {
        int floor = -1;
        int ceil = -1;

        while (root != NULL) {
            if (root -> val == key) {
                floor = root -> val;
                ceil = root -> val;
                break;
            }

            else if (root -> val < key) {
                floor = root -> val;
                root = root -> right;
            }

            else {
                ceil = root -> val;
                root = root -> left;
            }
        }

        return {
            floor,
            ceil
        };

    }
};
