class Solution {
    public String addBinary(String a, String b) {
        int cBit = 0;
        String res = "";
        int i = 0;
        while (a.length()-i > 0 && b.length()-i > 0){
            int temp = cBit+(a.charAt(a.length()-i-1)-'0')+(b.charAt(b.length()-i-1)-'0');
            if (temp == 0 || temp == 2){
                res = "0" + res;
                cBit = temp/2;
            }
            else{
                res = "1" + res;
                cBit = temp/2;
            }
            i++;
        }
        String c = "";
        if (a.length()-i > 0) c = a;
        else if (b.length()-i > 0) c = b;
        while (c.length()-i > 0){
            int temp = cBit+(c.charAt(c.length()-i-1)-'0');
            if (temp == 0 || temp == 2){
                res = "0" + res;
                cBit = temp/2;
            }
            else{
                res = "1" + res;
                cBit = temp/2;
            }
            i++;
        }
        if (cBit == 1) res = "1" + res;
        return res;
    }
}