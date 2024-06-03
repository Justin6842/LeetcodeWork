class Solution {
    private int k;
    public int minDepth(TreeNode root) {
        if (root == null) return 0;
        k = Integer.MAX_VALUE;
        search(root, 1);
        return k;
    }
    private void search(TreeNode n, int h){
        if (n == null) return;
        else if (n.left == null && n.right == null){
            if (h < k) k = h;
        }
        search(n.left, h+1);
        search(n.right, h+1);
    }
}