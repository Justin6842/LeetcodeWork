class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if ((int)target < letters[0] || (int)target >= (int)letters[letters.size()-1]) return letters[0];
        int high = letters.size()-1;
        int low{0};
        int mid{0};
        while (low <= high){
            mid = (low+high+1)/2;
            if ((int)letters[mid-1] <= (int)target && (int)letters[mid] > (int)target) return letters[mid];
            else if ((int)letters[mid] <= (int)target) low = mid+1;
            else{high = mid-1;}
        }
        return letters[0];
    }
};