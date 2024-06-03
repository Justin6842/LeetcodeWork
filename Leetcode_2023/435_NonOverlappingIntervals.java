import java.util.*;
class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        quickSort(intervals, 0, intervals.length-1);
        int sol = 0, top = intervals[0][1];
        for (int i = 1; i < intervals.length; i++){
            top = Math.min(top, intervals[i][1]);
            if (intervals[i][0] >= top){
                top = intervals[i][1];
            }
            else if (top > intervals[i][0]) sol++;
        }
        return sol;
    }
    private void quickSort(int[][] inter, int low, int high) {
        if (low < high) {
            int pivot = partition(inter, low, high);
            quickSort(inter, low, pivot - 1);
            quickSort(inter, pivot + 1, high);
        }
    }
    private int partition (int[][] inter, int low, int high){
        int pivot = inter[high][0];  
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++){
            if (inter[j][0] < pivot){
                i++;
                int temp = inter[j][0];
                int tem = inter[j][1];
                inter[j][0] = inter[i][0];
                inter[j][1] = inter[i][1];
                inter[i][0] = temp;
                inter[i][1] = tem;
            }
        }
        int temp = inter[i+1][0];
        int tem = inter[i+1][1];
        inter[i+1][0] = inter[high][0];
        inter[i+1][1] = inter[high][1];
        inter[high][0] = temp;
        inter[high][1] = tem;
        return (i + 1);
    }
}