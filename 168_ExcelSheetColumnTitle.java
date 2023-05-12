class Solution {
    public String convertToTitle(int columnNumber) {
        String x = "";
        while (columnNumber > 0){
            int k = columnNumber%26;
            if (k == 0){
                x = "Z" + x;
                columnNumber /= 26;
                columnNumber--;
            }
            else{
                x = (char)(k+64) + x;
                columnNumber /= 26;
            }
        }
        return x;
    }
}