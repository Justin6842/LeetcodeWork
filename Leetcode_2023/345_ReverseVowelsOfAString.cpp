#include <string>
class Solution {
public:
    string reverseVowels(string s) {
        int i {0};
        int j = s.length()-1;
        while (i < j){
            if (tolower(s.at(i))=='a'||tolower(s.at(i))=='e'||tolower(s.at(i))=='o'||tolower(s.at(i))=='i'||tolower(s.at(i))=='u'){
                if (tolower(s.at(j))=='a'||tolower(s.at(j))=='e'||tolower(s.at(j))=='o'||tolower(s.at(j))=='i'||tolower(s.at(j))=='u'){ 
                    swap(s[i], s[j]);
                    i++;
                }
                j--;       
            }
            else{i++;}
        }
        return s;
    }
};

