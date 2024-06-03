class Solution {
   public String restoreString(String s, int[] indices) {
      char[] index = new char[s.length()];
      String sol = "";
      for (int i = 0; i < s.length(); i++) {
         index[indices[i]] = s.charAt(i);
      }
      for (int i = 0; i < index.length; i++) {
         sol = sol + index[i];
      }
      return sol;
   }
}