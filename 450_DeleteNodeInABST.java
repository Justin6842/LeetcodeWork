class Solution {
    public TreeNode deleteNode(TreeNode root, int key) {
        if (root == null) return null;
        else if (root.val < key) root.right = deleteNode(root.right, key);
        else if (root.val > key) root.left = deleteNode(root.left, key);
        else{
            if (root.left == null && root.right == null) root = null;
            else if (root.left == null) return root.right;
            else if (root.right == null) return root.left;
            else{
                key = findLeft(root.right);
                root.val = key;
                root.right = deleteNode(root.right, key);
            }
        }
        return root;
    }
    private int findLeft(TreeNode n){
        if (n.left != null) return findLeft(n.left);
        int s = n.val;
        return s;
    }
}