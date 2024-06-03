import java.io.*;
import java.util.*;
class Solution {
    public int lastStoneWeight(int[] stones) {
        int[] prio = new int[stones.length+1];
        if (stones.length < 2) return stones[0];
        for (int i = 0; i < stones.length; i++){
            put(prio, i+1, stones[i]);
        }
        if (prio.length < 4){
            prio[1] = prio[1] - prio[2];
            return prio[1];
        }
        for (int i = 0; i < stones.length-1; i++){
            rockBreak(prio);
        }

        return prio[1];
    }
    private void rockBreak(int[] prio){
        if (prio[2] > prio[3]){
            prio[1] = prio[1] - prio[2];
            prio[2] = 0;
            sink(prio, 2);
            sink(prio, 1);
        } 
        else{
            prio[1] = prio[1] - prio[3];
            prio[3] = 0;
            sink(prio, 3);
            sink(prio, 1);
        }
        return;
    }
    private void put(int[] prio, int length, int val){
        prio[length] = val;
        swim(prio, length);
    }
    private void swim(int[] prio, int k){
        while (true){
            if (k/2 == 0) break;
            else if (prio[k] > prio[k/2]){
                int temp = prio[k/2];
                prio[k/2] = prio[k];
                prio[k] = temp;
                k = k/2;
            }
            else{
                break;
            }
        }
        return;
    }
    private void sink(int[] prio, int k){
        while (true){
            int smaller = -1;
            if (k*2 > prio.length-1) break;
            else if (k*2+1 > prio.length-1) smaller = k*2;
            else if (prio[k*2] >= prio[k*2+1]) smaller = k*2;
            else if (prio[k*2] < prio[k*2+1]) smaller = k*2+1;
            if (prio[k] > prio[smaller]) break;
            else{
                int temp = prio[smaller];
                prio[smaller] = prio[k];
                prio[k] = temp;
                k = smaller;
            }
        }
        return;
    }
}