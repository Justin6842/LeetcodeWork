import java.util.*;
class Solution {
    public TreeNode mergeTrees(TreeNode root1, TreeNode root2) {
        if (root1 == null && root2 != null) return root2;
        merge(root1, root2);
        return root1; 
    }
    private void merge(TreeNode root1, TreeNode root2){
        if (root1 == null && root2 == null) return;
        else if (root2 != null){
            root1.val = root1.val+root2.val;
        }
        else{
            return;
        }
        if (root1.left == null && root2.left != null) root1.left = new TreeNode(0, null, null);
        if (root1.right == null && root2.right != null) root1.right = new TreeNode(0, null, null);
        merge(root1.left, root2.left);
        merge(root1.right, root2.right);
        return;
    }

}