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
    public TreeNode sortedArrayToBST(int[] nums) {
        TreeNode head = new TreeNode(nums[nums.length/2], null, null);
        if (nums.length > 1){
            head.left = add(nums, head.left, 0, nums.length/2);
            head.right = add(nums, head.right, nums.length/2+1, nums.length);
        }
        return head;
    }
    private TreeNode add(int[] nums, TreeNode n, int s, int e){
        if (e-s == 0) return null;
        if (e-s == 1){
            n = new TreeNode(nums[s], null, null);
            return n;
        }
        int mid = (s+e)/2;
        n = new TreeNode(nums[mid], null, null);
        System.out.println(n.val);
        n.left = add(nums, n.left, s, mid);
        n.right = add(nums, n.right, mid+1, e);
        return n;
    }
}