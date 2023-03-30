import java.util.*;
class Solution {
    public Node connect(Node root) {
        if (root == null) return root;
        root.next = null;
        if (root.left != null){
            root.left.next = root.right;
            root.right.next = null;
        }        
        Queue<Node> queue = new LinkedList<Node>();
        queue.add(root);
        while (!queue.isEmpty()) {
            Node temp = queue.remove();
            if (temp.left != null) {
               temp.left.next = temp.right;
               queue.add(temp.left);
            }
            if (temp.right != null) {
                if (temp.next == null){
                    temp.right.next = null;
                }
                else{
                    temp.right.next = temp.next.left;
                }
                queue.add(temp.right);
           }
        }
        return root;
    }
}