import java.io.*;
import java.util.*;
class Solution {
    public void rotate(int[] nums, int k) {
        int[] n = new int[nums.length];
        k %= nums.length;
        for (int i = nums.length-k; i < nums.length; i++){
            n[i-(nums.length-k)] = nums[i];
        }
        for (int i = 0; i < (nums.length-k); i++){
            n[k+i] = nums[i];
        }
        for (int i = 0; i < nums.length; i++){
            nums[i] = n[i];
        }
    }
}