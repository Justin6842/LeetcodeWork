/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

 class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        List<TreeNode> proute = new ArrayList<TreeNode>();
        List<TreeNode> qroute = new ArrayList<TreeNode>();
        traverse(root, p.val, proute);
        traverse(root, q.val, qroute);
        TreeNode x = root;
        for (int i = 1; i < proute.size(); i++){
            if (qroute.size() < i+1) break;
            if (qroute.get(i).val != proute.get(i).val) break;
            x = proute.get(i);
        }
        return x;
    }
    private boolean traverse(TreeNode r, int p, List<TreeNode> route){
        if (r == null) return false;
        route.add(r);
        if (r.val == p) return true;
        if (traverse(r.left, p, route)) return true;
        if (traverse(r.right, p, route)) return true;
        route.remove(r);
        return false;
    }
    
}