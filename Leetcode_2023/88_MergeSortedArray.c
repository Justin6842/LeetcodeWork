#include <stdlib.h>
#include <string.h>
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b);
}
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
   if (n == 0){
       return;
   }
   for (int i = 0; i < n; i++){
       nums1[m+i] = nums2[i];
   }
   qsort(nums1, nums1Size, sizeof(int), cmpfunc);
}