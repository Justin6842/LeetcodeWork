class Solution {
    public int strStr(String haystack, String needle) {
        if (needle.equals(haystack)) return 0;
        int size = needle.length();
        for (int i = 0; i < haystack.length()-size+1; i++){
            if (needle.equals(haystack.substring(i, i+size))) return i;
        }
        return -1;
    }
}