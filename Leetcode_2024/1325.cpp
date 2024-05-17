/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int clearTree(TreeNode* node, int target){
        if (node->left == NULL && node->right == NULL){
            return 1;
        }
        int ret = 1;
        if (node->left != NULL){
            if (clearTree(node->left, target) == 1 && node->left->val == target) node->left = NULL;
            else{
                ret = 0;
            }
        }
        if (node->right != NULL){
            if (clearTree(node->right, target) == 1 && node->right->val == target) node->right = NULL;
            else{
                ret = 0;
            }
        }
        if (ret == 1) return 1;
        return 0;
    }

    TreeNode* removeLeafNodes(TreeNode* root, int target){
        clearTree(root, target);
        if (root->val == target && root->left == NULL && root-> right == NULL) return NULL;
        else{
            return root;
        }
    }
};