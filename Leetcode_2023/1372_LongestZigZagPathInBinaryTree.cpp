class Solution {
public:
    int sol{0};
    void traverseL(TreeNode* n, int k){
        if (n == nullptr) return;
        if (k > sol) sol = k;
        traverseL(n->left, 1);
        traverseR(n->right, k+1);
    }
    void traverseR(TreeNode* n, int k){
        if (n == nullptr) return;
        if (k > sol) sol = k;
        traverseL(n->left, k+1);
        traverseR(n->right, 1);
    }
    int longestZigZag(TreeNode* root) {
        if (root == nullptr) return 0;
        traverseL(root->left,1); 
        traverseR(root->right,1);
        return sol;
    }
};