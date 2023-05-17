class Solution {
public:
    int digits(int c){
        int result {0};
        while (c/10 != 0){
            c /= 10;
            result++;
        }
        return result;
    }
    int compress(vector<char>& chars) {
        int count {0};
        int place {0};
        for(int i = 0; i < chars.size(); i++){
            count++;
            if (i == chars.size()-1 || chars[i+1] != chars[i]){
                if (count == 1){
                    chars[place++] = chars[i];
                    count = 0;
                }
                else{
                    chars[place++] = chars[i];
                    while (count != 0){
                        int dig = digits(count);
                        int x = count/pow(10, dig);
                        chars[place++] = (char)(x+48);
                        count -= x*pow(10, dig);
                        if (count == 0 && dig > 0){
                            while (dig != 0){
                                chars[place++] = '0';
                                dig--;
                            }
                        }
                    }
                }
            }
        }
        return place;
    }
};