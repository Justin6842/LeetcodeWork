import java.util.*;
class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        List<List<Integer>> sol = new ArrayList<List<Integer>>();
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        sol.add(new ArrayList<Integer>());
        sol.add(new ArrayList<Integer>());
        int j = 0, k = 0;
        while (j < nums1.length && k < nums2.length){
            if (nums1[j] == nums2[k]){
                j = progress(j, nums1);
                k = progress(k, nums2);
            }
            else if (nums1[j] < nums2[k]){
                sol.get(0).add(nums1[j]);
                j = progress(j, nums1);
            }
            else{
                sol.get(1).add(nums2[k]);
                k = progress(k, nums2);
            }
        }
        if (j < nums1.length){
            while (j < nums1.length){
                sol.get(0).add(nums1[j]);
                j = progress(j, nums1);
            }
        }
        else{
            while (k < nums2.length){
                sol.get(1).add(nums2[k]);
                k = progress(k, nums2);
            }
        }
        return sol;
    }
    private int progress(int n, int[] stuff){
        int temp = stuff[n];
        while(true){
            n++;
            if (n == stuff.length) break;
            else if(stuff[n] != temp) break;
        }
        return n;
    }
}