class Solution {
public:
    int sol{0};
    void traverse(TreeNode* n, long target){
        if (n == nullptr) return;
        if (n->val == target) sol++;
        traverse(n->left, target-(n->val));
        traverse(n->right, target-(n->val));
    }
    int pathSum(TreeNode* root, int targetSum){
        if (root != nullptr){
            traverse(root, (long)targetSum);
            pathSum(root->left, targetSum);
            pathSum(root->right, targetSum);
        }
        return sol;
    }
};