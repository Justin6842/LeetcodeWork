import java.util.*;
class Solution {
    public String minRemoveToMakeValid(String s) {
        Stack<Character> c = new Stack<>();
        int p = 0;
        while (p < s.length()){
            System.out.println(p);
            if (s.charAt(p) == ')' && c.size() == 0){
                s = s.substring(0, p) + s.substring(p+1, s.length());
                continue;
            }
            else if(s.charAt(p) == ')') c.pop();
            else if(s.charAt(p) == '(') c.push('(');
            p++;
        }
        p = s.length()-1;
        int count = c.size();
        while (count > 0){
            if (s.charAt(p) == '('){
                s = s.substring(0, p) + s.substring(p+1, s.length());
                count --;
            }
            p--;
        }
        return s;
    }
}