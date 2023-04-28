class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length-1;
        int x = 0;
        while (true){
            digits[n]++;
            if (digits[n] != 10) break;
            else if (n == 0){
                digits[n] = 0;
                x++;
                break;
            }
            digits[n] = 0;
            n--;
        }
        if (x == 1) n = digits.length+1;
        else{
            n = digits.length;
        }
        int[] sol = new int[n];
        int len = 0;
        if (x == 1) sol[len++] = 1;
        for (int i = 0; i < digits.length; i++){
            sol[len++] = digits[i];
        }
        return sol;
    }
}