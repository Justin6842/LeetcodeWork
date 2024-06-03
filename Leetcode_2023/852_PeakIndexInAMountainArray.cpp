class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low{1};
        int high = arr.size()-2;
        while(true){
            int mid = (low+high)/2;
            if (arr[mid-1] > arr[mid]) high = mid-1;
            else if (arr[mid+1] > arr[mid]) low = mid+1;
            else{
               return mid;
            }
        }
        return -1;
    }
};