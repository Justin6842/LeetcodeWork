import java.util.*;
class Solution {
    public int longestPalindrome(String s) {
        int[] count = new int[128];
        int sum = 0, extra = 0;
        for (int i = 0; i < s.length(); i++){
            count[(int)s.charAt(i)]++;
        }
        for (int i = 0; i < 128; i++){
            sum += count[i]/2*2;
            if (count[i]%2 == 1) extra = 1;
        }
        return (extra+sum);
    }
}