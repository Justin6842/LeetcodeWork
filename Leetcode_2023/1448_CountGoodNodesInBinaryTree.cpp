
class Solution {
public:
    int sol{0};
    void traverse(TreeNode* n, int high){
        if (!n) return;
        if (n->val >= high){
            high = n->val;
            sol++;
        }
        traverse(n->left, high);
        traverse(n->right, high);

    }
    int goodNodes(TreeNode* root) {
        traverse(root, -10001);
        return sol;     
    }
};