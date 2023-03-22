import java.io.*;
import java.util.*;
class Solution {
    public int searchInsert(int[] nums, int target) {
        if (target < nums[0]) return 0;
        if (target > nums[nums.length-1]) return nums.length;
        int min = 0, max = nums.length-1, mid = -1;
        while (min < mid || mid < max){
            mid = (min+max)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid+1] == target) return mid+1;
            else if (nums[mid] < target && nums[mid+1] > target) return mid+1;
            else if (nums[mid] > target && nums[mid-1] < target) return mid;
            else if (nums[mid] > target) max = mid;
            else{
                min = mid;
            }
        }
        return -1;
    }
}