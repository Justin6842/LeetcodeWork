#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int total = nums1Size+nums2Size;
    int counter = 0, c1 = 0, c2 = 0;
    int nums[total/2+1];
    while (counter < (total/2+1)){
        if (c2 == nums2Size && c1 < nums1Size){
            nums[counter] = nums1[c1];
            c1++;
        }
        else if (c1 == nums1Size && c2 < nums2Size){
            nums[counter] = nums2[c2];
            c2++;
        }
        else if (nums1[c1] <= nums2[c2]){
            nums[counter] = nums1[c1];
            c1++;
        }
        else if (nums1[c1] > nums2[c2]){
            nums[counter] = nums2[c2];
            c2++;
        }
        counter++;
    }
    if (total%2 == 1){
        return (double)(nums[counter-1]);
    }
    else{
        return (double)(nums[counter-1]+nums[counter-2])/2;
    }
}