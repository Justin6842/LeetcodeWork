class Solution {
    public:
        bool closeStrings(string word1, string word2) {
            if (word1.length() != word2.length()) return false;
            vector<int> hash (26, 0);
            vector<int> hashT (26, 0);
            for (int i = 0; i < word1.length(); i++){
                hash[word1.at(i)-97]++;
                hashT[word2.at(i)-97]++;
            }
            for (int i = 0; i < hash.size(); i++){
                if ((hash[i] && !hashT[i])||(!hash[i] && hashT[i])) return false;
            }
            sort(hash.begin(), hash.end());
            sort(hashT.begin(), hashT.end());
            for (int i = hash.size()-1; i > -1; i--){
                if (hash[i] != hashT[i]) return false;
                else if (hash[i] == 0) break;
            }
            return true;
        }
    };