 #include <stdlib.h>
 int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int allocate = numsSize*2;
    int **res = (int **)malloc(allocate * sizeof(int*));
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    int solution = 0;
    for (int i = 0; i < numsSize-2; i++){
        if (i > 0 && nums[i] == nums[i-1]) continue;
        int j = i+1;
        int k = numsSize-1;
        int temp;
        while (j < k){
            if (nums[j] + nums[k] + nums[i] == 0){
                res[solution] = malloc(sizeof(int) * 3);
                res[solution][0] = nums[i];
                res[solution][1] = nums[j];
                res[solution][2] = nums[k];
                ++solution;
                if (solution == allocate) {
                    allocate *= 2;
                    res = (int **)realloc(res, allocate * sizeof(int *));
                }
                temp = j;
                while (true){
                    j++;
                    if (j > k || nums[temp] != nums[j]) break;
                }
            }
            else if (nums[j] + nums[k] + nums[i] < 0) j++;
            else if(nums[j] + nums[k] + nums[i] > 0) k--;
        }
    }
    *returnSize = solution;
    *returnColumnSizes = malloc(solution * sizeof(int));    
    for (int i = 0; i < solution; ++i)
        (*returnColumnSizes)[i] = 3;
    
    return res;
}