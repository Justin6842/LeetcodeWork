class Solution {
    public int bulbSwitch(int n) {
        int k = 0;
        while (true){
            if (Math.pow(k, 2) > n) return k-1;
            k++;
        }
    }
}