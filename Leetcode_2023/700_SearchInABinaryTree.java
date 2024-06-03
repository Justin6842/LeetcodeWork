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
    public TreeNode searchBST(TreeNode root, int val) {
        List<TreeNode> sol = new ArrayList<TreeNode>();
        search(root, val, sol);
        if (sol.size() == 0) return null;
        else{
            return sol.get(0);
        }
    }
    private void search(TreeNode n, int target, List<TreeNode> sol){
        if (n == null) return;
        if (n.val == target) sol.add(n);
        else if (n.val < target) search(n.right, target, sol);
        else if (n.val > target) search(n.left, target, sol);
    }
}