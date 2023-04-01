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
    List<Integer> lef = new ArrayList<Integer>();
    List<Integer> rig = new ArrayList<Integer>();
    public boolean isSymmetric(TreeNode root){
        if (root.left == null && root.right == null) return true;
        ltraverse(root.left);
        rtraverse(root.right);
        for(int i = 0; i < lef.size(); i++){
            if (lef.get(i) != rig.get(i)) return false;
        }
        return true;
    }
    private void ltraverse(TreeNode r){
        if (r == null){
            lef.add(-101);
            return;
        }
        lef.add(r.val);
        ltraverse(r.left);
        ltraverse(r.right);
    }
    private void rtraverse(TreeNode r){
        if (r == null){
            rig.add(-101);
            return;
        }
        rig.add(r.val);
        rtraverse(r.right);
        rtraverse(r.left);
    }
}