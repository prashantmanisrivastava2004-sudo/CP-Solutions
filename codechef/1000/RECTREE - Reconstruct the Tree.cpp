/*struct Node{
	int label;
	struct Node *left,*right;
	Node(int x){
		label = x;
		left = NULL;
		right = NULL;
	}
};*/

Node* reconstruct(vector <int> A){
    int n = A.size();

        if (n == 0) return NULL;

        vector<Node*> nodes(n);

        //create all nodes
        for (int i = 0; i < n; i++) {
            nodes[i] = new Node(A[i]);
        }

        // Connect left and right children
        for (int i = 0; i < n; i++) {
            if (2 * i + 1 < n) {
                nodes[i]->left = nodes[2 * i + 1];
            }

            if (2 * i + 2 < n) {
                nodes[i]->right = nodes[2 * i + 2];
            }
        }

        return nodes[0];
}
