/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int sol = 0;
    int j = 0;
    public int kthSmallest(TreeNode root, int k) {
        j = k;
        trav(root);
        return sol;
    }
    private void trav(TreeNode n){
        if (n == null) return;
        trav(n.left);
        j--;
        if (j == 0) sol = n.val;
        trav(n.right);
    }
}