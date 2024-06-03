class Solution {
public:
    void traverse(vector<string>& sol, TreeNode* n, string x){
        x = x + "->" + to_string(n->val);
        if (n->left == nullptr && n->right == nullptr){
            sol.push_back(x);
            return;
        }
        else if(n->left != nullptr) traverse(sol, n->left, x);
        if(n->right != nullptr) traverse(sol, n->right, x);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root->left == nullptr && root->right == nullptr){
            return {to_string(root->val)};
        }
        vector<string> sol;
        if (root->left != nullptr) traverse(sol, root->left, to_string(root->val));
        if (root->right != nullptr) traverse(sol, root->right, to_string(root->val));
        return sol;    
    }
};