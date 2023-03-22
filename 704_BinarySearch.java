import java.io.*;
import java.util.*;
class Solution {
    public int search(int[] nums, int target) {
        int low = 0, high = (nums.length-1), res = -1, mid = 0;
        while (low <= high){
            mid = (low+high)/2;
            if (nums[mid] == target){
                res = mid;
                break;
            }
            if (high-1 == low || high == low){
                if (nums[high] == target) res = high;
                break;
            }
            else if (nums[mid] > target) high = mid;
            else if (nums[mid] < target) low = mid;
        }
        return res;
    }
}