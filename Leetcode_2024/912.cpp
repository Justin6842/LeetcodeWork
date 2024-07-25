class Solution {
public:
    void quickSort(vector<int>& arr, int low, int high){
         if (low < high){
            //set a random number for good measure
            int x = 123;
            unsigned long random = reinterpret_cast<unsigned long>(&x);
            random %= (high-low);
            int temp;
            temp = arr[low+random];
            arr[low+random] = arr[high];
            arr[high] = temp;
            //partition
            int i = low-1;
            for (int j = low; j < high; j++){
                if (arr[j] < arr[high]){
                    i++;
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
            temp = arr[i+1];
            arr[i+1] = arr[high];
            arr[high] = temp;
            quickSort(arr, low, i);
            quickSort(arr, i+2, high);
        }
    }
    vector<int> sortArray(vector<int>& nums){
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};