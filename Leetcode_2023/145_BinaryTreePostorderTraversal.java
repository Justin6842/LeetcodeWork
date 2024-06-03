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
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> sol = new ArrayList<Integer>();
        traverse(root, sol);
        return sol;
    }
    private void traverse(TreeNode root, List<Integer> sol){
        if (root == null) return;
        traverse(root.left, sol);
        traverse(root.right, sol);
        sol.add(root.val);
    }
}