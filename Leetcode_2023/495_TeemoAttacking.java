import java.util.*;
class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int sol = duration;
        for (int i = 0; i < timeSeries.length-1; i++){
            sol += Math.min(timeSeries[i+1]-timeSeries[i], duration);
        }
        return sol;
    }
}