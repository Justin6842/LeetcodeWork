import java.io.*;
import java.util.*;
class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> stackS = new Stack<Character>();
        Stack<Character> stackT = new Stack<Character>();
        for (int i = 0; i < s.length(); i++){
            if (s.charAt(i) != '#') stackS.add(s.charAt(i));
            else if (s.charAt(i) == '#' && !stackS.isEmpty()) stackS.pop();
        }
        for (int i = 0; i < t.length(); i++){
            if (t.charAt(i) != '#') stackT.add(t.charAt(i));
            else if (t.charAt(i) == '#' && !stackT.isEmpty()) stackT.pop();
        }
        if (stackT.size() != stackS.size()) return false;
        for (int i = 0; i < stackS.size(); i++){
            if (stackT.get(i) != stackS.get(i)) return false;
        }
        return true;

    }
}