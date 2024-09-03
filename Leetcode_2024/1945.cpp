class Solution {
public:
    int getLucky(string s, int k) {
        int total = 0;
        for (int i = 0; i < s.length(); i++){
            int x = s[i]-'a'+1;
            if (x > 9){
                x = (x/10)+(x%10);
            }
            total += x;
        }
        for (int i = 1; i < k; i++){
            int temp = total;
            total = 0;
            while (temp > 0){
                total += temp%10;
                temp /= 10;
            }
        }
        return total;
    }
};