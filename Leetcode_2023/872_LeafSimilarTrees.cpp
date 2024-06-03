class Solution {
public:
    void traverse(TreeNode* n, vector<int> &v){
        if (!n) return;
        traverse(n->left, v);
        if (!n->left && !n->right) v.push_back(n->val);
        traverse(n->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> one, two;
        traverse(root1, one);
        traverse(root2, two);
        return (one == two);
    }
};