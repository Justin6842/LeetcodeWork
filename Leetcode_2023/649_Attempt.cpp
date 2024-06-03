class Solution {
public:
    int remove(string& sen, char target, int start){
        int i = start+1;
        if (i == sen.length()) i = 0;
        while(i != start){
            if (sen.at(i) == target){
                sen.erase(sen.begin()+i);
                return 0;
            }   
            i++;
            if (i == sen.length()) i = 0;
        }
        return 1;
    }
    string predictPartyVictory(string senate) {
        int i = 0;
        while (true){
            if (i >= senate.length()) i = 0;
            if (senate.at(i) == 'R'){
                if (remove(senate, 'D', i)) return "Radiant";
            }
            else if (senate.at(i) == 'D'){
                if (remove(senate, 'R', i)) return "Dire";
            }
            i++;
        }
    }
};