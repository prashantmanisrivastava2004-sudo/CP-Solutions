/*
struct Node {
    int val; 
    Node *left;
    Node *right;

    Node(int node_value) {
        val = node_value;
        left = right = NULL;
    }
}; */

class Solution {
  public:
  
    bool check(Node* r1, Node* r2){
        if(!r1 && !r2){
            return true;
        }
        if((!r1 && r2)||(!r2 && r1)){
            return false;
        }
        return check(r1->left,r2->left)&&check(r1->right,r2->right);
    }
    void isIdenticalTrees(Node* root1, Node* root2) {
        if(check(root1,root2)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
};
