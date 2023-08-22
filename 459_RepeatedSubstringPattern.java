class Solution {
   public boolean repeatedSubstringPattern(String s) {
       int check;
       for (int i = 1; i <= s.length()/2; i++){
           for (check = i; check+i <= s.length(); check += i){
               if (!s.substring(0, i).equals(s.substring(check, check+i))) break;
           }
           if (check == s.length()) return true;
       }
       return false;
   }
}