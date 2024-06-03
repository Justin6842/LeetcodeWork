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
    public int maxDepth(TreeNode root) {
        List<Integer> sol = new ArrayList<Integer>();
        traverse(root, sol, 1);
        return (sol.size());
    }
    private void traverse(TreeNode n, List<Integer> s, int k){
        if (n == null) return;
        if (k > s.size()) s.add(0);
        traverse(n.left, s, k+1);
        traverse(n.right, s, k+1);
    }
}