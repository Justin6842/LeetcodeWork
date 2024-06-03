class Solution {
    public String reverseWords(String s) {
        String sol = "";
        int start = 0; 
        boolean w = false;
        for (int i = 0; i < s.length(); i++){
            if (w && s.charAt(i) == ' '){
                if (sol.length() > 0) sol = s.substring(start, i) + ' ' + sol;
                else{
                    sol = s.substring(start, i);
                }
                w = false;
            }
            else if (!w && s.charAt(i) != ' '){
                start = i;
                w = true;
            }
        }
        if (w){
            if (sol.length() > 0) sol = s.substring(start, s.length()) + ' ' + sol;
            else{
                sol = s.substring(start, s.length());
            }
        }
        return sol;
    }
}