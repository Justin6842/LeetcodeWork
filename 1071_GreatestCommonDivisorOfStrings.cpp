class Solution {
    public:
        int gcd(int a, int b) {
            if (b == 0)
            return a;
            return gcd(b, a % b);
        }
        string gcdOfStrings(string str1, string str2) {
            string sol = "";
            int i = 0;
            while (i < str1.length() && i < str2.length()){
                if (str1.at(i) == str2.at(i)) sol += str1.at(i);
                i++;
            }
            if (sol.length() == 0) return sol;
            if (str1.length()%sol.length() != 0 || str2.length()%sol.length() != 0){
                sol = sol.substr(0, gcd(str1.length(), str2.length()));
            }
            for (int j = 0; j < str1.length(); j += sol.length()){
                if (sol != str1.substr(j, sol.length())) return "";
            }
            for (int j = 0; j < str2.length(); j += sol.length()){
                if (sol != str2.substr(j, sol.length())) return "";
            }
            return sol;
        }
};