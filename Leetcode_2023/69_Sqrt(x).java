import java.util.*;
class Solution {
    public int mySqrt(int x) {
        int low = 0, high = 46340;
        while (true){
            if (low == high) return low;
            if (Math.pow((low+high)/2,2) > x){
                high = (low+high)/2;
            }
            else{
                if (Math.pow((low+1), 2) > x) return low;
                else if ((low+high)/2 == low) low++;
                low = (low+high)/2;
            }
        }
    }
}