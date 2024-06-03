import java.io.*;
import java.util.*;
class Solution {
    public String decodeString(String s) {
        String sol = "";
        sol = pan(s, 0, s.length(), 1);
        return sol;
    }
    private String pan(String s, int start, int end, int n){
        String x = "";
        int i = start;
        while (i < end){
            if ((s.charAt(i)-'0') > -1 && (s.charAt(i)-'0') < 10){
                int k = findInt(s, i, end);
                while(true){
                    if (s.charAt(i) == '[') break;
                    i++;
                }
                int e = findEnd(s, i, end);
                x += pan(s, i+1, e, k);
                i = e+1;
            }
            else{
                x += s.charAt(i);
                i++;
            }
        }
        String temp = x;
        x = "";
        for (int j = 0; j < n; j++){
            x += temp;
        }
        return x;
    }
    private int findEnd(String s, int start, int end){
        Stack<Character> stac = new Stack<Character>();
        int sol = -1;
        for (int i = start; i <= end; i++){
            if (s.charAt(i) == '[') stac.add('[');
            else if (s.charAt(i) == ']') stac.pop();
            if (stac.isEmpty()){
                sol = i;
                break;
            }
        }
        return sol;
    }
    private int findInt(String s, int start, int end){
        int i = start;
        int x = 0;
        while (i <= end){
            if ((s.charAt(i)-'0') > -1 && (s.charAt(i)-'0') < 10){
                x = x*10+(s.charAt(i)-'0');

            }
            else if(s.charAt(i) == '[') break;
            i++;
        }
        return x;
    }
}