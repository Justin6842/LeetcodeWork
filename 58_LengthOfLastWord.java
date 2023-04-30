class Solution {
    public int lengthOfLastWord(String s) {
        int sol = 0;
        boolean stat = false;
        for (int i = s.length()-1; i > -1; i--){
            if (stat){
                if (s.charAt(i) == ' ') break;
                else{
                    sol++;
                }
            }
            else if (s.charAt(i) != ' '){
                stat = true;
                sol++;
            }
        }
        return sol;
    }
}