//not on leetcode this has errors
class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            int i {0};
            int j {0};
            string str = {""};
            while (i < min(word1.length(),word2.length())){
                str += word1[i++];
                str += word2[j++];
            }
            for (int k = i; k < word1.length(); k++){
                str += word1[k];
            }
            for (int k = j; k < word2.length(); k++){
                str += word2[k];
            }
            return str;
        }
    };