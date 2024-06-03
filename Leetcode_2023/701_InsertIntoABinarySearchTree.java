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
    public TreeNode insertIntoBST(TreeNode root, int val) {
        if (root == null) return new TreeNode(val, null, null);
        insert(root, val);
        return root;
    }
    private void insert(TreeNode n, int v){
        if (n.val < v){
            if (n.right == null) n.right = new TreeNode(v, null, null);
            else{
                insert(n.right, v);
            }
        }
        else{
            if (n.left == null) n.left = new TreeNode(v, null, null);
            else{
                insert(n.left, v);
            }
        }
    }
}