class Solution {
public:
    int findEnd(string s, int start, int end){
        stack<char> stac;
        int i = start;
        while(i < end){
            if (s.at(i) == '[') stac.push('[');
            else if (s.at(i) == ']') stac.pop();
            if (stac.empty()) break;
            i++;
        }
        return i;
    }
    int findInt(string s, int start, int end){
        int i = start;
        int x = 0;
        while (i < end){
            if ((s.at(i)-'0') > -1 && (s.at(i)-'0') < 10) x = x*10+(s.at(i)-'0');
            else if(s.at(i) == '[') break;
            i++;
        }
        return x;
    }
    string pan(string s, int start, int end, int reps){
        string x = "";
        int i = start;
        while (i < end){
            if ((s.at(i)-'0') > -1 && (s.at(i)-'0') < 10){
                int repeats = findInt(s, i, end);
                while(true){
                    if (s.at(i) == '[') break;
                    i++;
                }
                int e = findEnd(s, i, end);
                x += pan(s, i+1, e, repeats);
                i = e+1;
            }
            else{
                x += s.at(i);
                i++;
            }
        }
        string temp = x;
        x = "";
        for (int j = 0; j < reps; j++){
            x += temp;
        }
        return x;
    }
    string decodeString(string s) {
        string sol = "";
        sol = pan(s, 0, s.length(), 1);
        return sol;
    }
};