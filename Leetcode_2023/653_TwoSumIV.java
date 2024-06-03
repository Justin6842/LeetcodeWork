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
    public boolean findTarget(TreeNode root, int k) {
        List<Integer> n = new ArrayList<Integer>();
        search(root, n);
        List<Integer> s = new ArrayList<Integer>();
        for (int i = 0; i < n.size(); i++){
            if (s.contains(n.get(i))) return true;
            s.add((k-n.get(i)));
        }
        return false;
    }
    private void search(TreeNode r, List<Integer> n){
        if (r == null) return;
        n.add(r.val);
        search(r.left, n);
        search(r.right, n);
    }
}