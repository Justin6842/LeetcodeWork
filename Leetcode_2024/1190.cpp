#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int returnP(int index, string s){
        int count = 1;
        for (int i = index+1; i < s.length(); i++){
            if (s[i] == '(') count++;
            else if (s[i] == ')') count--;
            if (count == 0) return i;
        }
        return -1;
    }
    string flipStr(string s){
        string result = "";
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '('){
                int temp = returnP(i, s);
                result += flipStr(s.substr(i+1, temp-i-1));
                i = temp;
            }
            else{
                result += s[i];
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
    string reverseParentheses(string s){
        string result = "";
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '('){
                int temp = returnP(i, s);
                result += flipStr(s.substr(i+1, temp-i-1));
                i = temp;
            }
            else{
                result += s[i];
            }
        }
        return result;
    }
};