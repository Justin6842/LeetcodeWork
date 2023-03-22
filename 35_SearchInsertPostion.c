int searchInsert(int* nums, int numsSize, int target){
    int i = 0; 
    int j = numsSize-1;
    if (target > nums[j]) return numsSize;
    if (target < nums[i]) return 0;
    while (i <= j){
        if (target == nums[j]) return j;
        else if (target <= nums[i]) return i;
        else if (target > nums[j]) return j+1;
        i++;
        j--; 
    }
    return i;
}