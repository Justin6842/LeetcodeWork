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
    public boolean hasPathSum(TreeNode root, int targetSum) {
        return sum(root, targetSum, 0);
    }
    private boolean sum(TreeNode n, int target, int total){
        if (n == null) return false;
        total += n.val;
        if (total == target && n.left == null && n.right == null) return true;
        if (n.left != null || n.right != null) return (sum(n.left, target, total) || sum(n.right, target, total));
        return false;
    }
}