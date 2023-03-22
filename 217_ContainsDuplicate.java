import java.io.*;
import java.util.*;
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> h = new HashSet<Integer>();
        for (int i = 0; i < nums.length; i++){
            h.add(nums[i]);
        }
        if (nums.length == h.size()) return false;
        return true;
    }
}