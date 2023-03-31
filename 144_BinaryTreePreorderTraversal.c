 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int s = 0;
 void preord(struct TreeNode* node, int*order){
    if (node == NULL) return;
    order[s++] = node->val;
    preord(node->left, order);
    preord(node->right, order);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int k = 0;
    int* order = (int*)malloc(100*sizeof(int));
    if (root != NULL) preord(root, order);
    *returnSize = s;
    s = k;
    return order;
}