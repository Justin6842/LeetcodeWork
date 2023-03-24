import java.util.*;
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        List<Integer> n = new ArrayList<Integer>();
        int i = 0, j = 0;
        while (true){
            if (i > nums1.length-1 || j > nums2.length-1) break;
            else if (nums1[i] == nums2[j]){
                n.add(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j]) j++;
            else{
                i++;
            }
        }
        int[] sol = new int[n.size()];
        for (int k = 0; k < sol.length; k++){
            sol[k] = n.get(k);
        }
        return sol;
    }
}