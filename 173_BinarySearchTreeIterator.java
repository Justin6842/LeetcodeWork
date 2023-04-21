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
class BSTIterator {
    TreeNode n = null;
    int[] storage = new int[100000];
    int counter = 0, quant = 0;
    public BSTIterator(TreeNode root) {
        n = root;
        trav(root);
        counter = 0;
    }
    private void trav(TreeNode nod){
        if (nod == null) return;
        trav(nod.left);
        storage[counter++] = nod.val;
        quant++;
        trav(nod.right);
    }
    public int next() {
        counter++;
        quant--;
        return (storage[counter-1]);
    }
    
    public boolean hasNext() {
        if (quant == 0) return false;
        return true;
    }
}

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator obj = new BSTIterator(root);
 * int param_1 = obj.next();
 * boolean param_2 = obj.hasNext();
 */