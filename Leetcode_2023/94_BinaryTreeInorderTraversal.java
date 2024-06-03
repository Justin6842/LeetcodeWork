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
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> sol = new ArrayList<Integer>();
        traverse(root, sol);
        return sol;
    }
    private void traverse(TreeNode root, List<Integer> sol){
        if (root == null) return;
        traverse(root.left, sol);
        sol.add(root.val);
        traverse(root.right, sol);
    }
}