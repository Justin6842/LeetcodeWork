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
    List<List<Integer>> ret = new ArrayList<List<Integer>>();
    int k = 0;
    public List<List<Integer>> levelOrder(TreeNode root) {
        traverse(root, 0);
        return ret;

    }
    private void traverse(TreeNode n, int level){
        if (n == null) return;
        if (level >= k){
            ret.add(new ArrayList<Integer>());
            k++;
        }
        ret.get(level).add(n.val);
        traverse(n.left, level+1);
        traverse(n.right, level+1);
    }
}