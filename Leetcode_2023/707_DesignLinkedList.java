import java.util.*;
class MyLinkedList {
    int[] list = new int[2000];
    int size = 0;
    public MyLinkedList() {
        Arrays.fill(list, -1);
    }
    
    public int get(int index) {
        return list[index];
    }
    
    public void addAtHead(int val) {
        for (int i = size; i > 0; i--){
            list[i] = list[i-1];
        }
        list[0] = val;
        size++;
    }
    
    public void addAtTail(int val) {
        list[size] = val;
        size++;
    }
    
    public void addAtIndex(int index, int val) {
        for (int i = size; i > index; i--){
            list[i] = list[i-1];
        }
        list[index] = val;
        size++;
    }
    
    public void deleteAtIndex(int index) {
        for (int i = index; i < size; i++){
            list[i] = list[i+1];
        }
        if (index < size) size--;
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */