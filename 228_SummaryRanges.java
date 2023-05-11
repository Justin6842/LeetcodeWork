import java.util.*;
class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> sol = new ArrayList<String>();
        boolean noStart = true;
        int start = 0, end = 0;
        for(int i = 0; i < nums.length; i++){
            if (noStart){
                start = nums[i];
                noStart = false;
            }
            else{
                if (nums[i-1] != nums[i]-1){
                    if (nums[i-1] == start) sol.add(Integer.toString(start));
                    else{
                        sol.add(start+"->"+end);
                    }
                    start = nums[i];
                }
                else{
                    end = nums[i];
                }
            }
        }
        if (noStart == false){
            if (nums[nums.length-1] == start) sol.add(Integer.toString(start));
            else{
                sol.add(start+"->"+end);
            }
        }
        return sol;
    }
}