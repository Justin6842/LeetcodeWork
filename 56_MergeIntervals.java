import java.util.*;
class Solution {
    public int[][] merge(int[][] intervals) {
        quickSort(intervals, 0, intervals.length-1);
        int size = intervals.length, i = 0, j = 1;
        while (j < intervals.length){
            if (intervals[j][0] <= intervals[i][1]){
                intervals[i][1] = Math.max(intervals[i][1], intervals[j][1]);
                intervals[j][0] = -1;
                size--;
                j++;
            }
            else{
                i = j;
                j++;
            }
        }
        int[][] sol = new int[size][2];
        int n = 0;
        for (int k = 0; k < intervals.length; k++){
            if (intervals[k][0] != -1){
                sol[n][0] = intervals[k][0];
                sol[n][1] = intervals[k][1];
                n++;
            }
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