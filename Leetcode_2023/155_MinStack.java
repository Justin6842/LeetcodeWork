class MinStack {
    int[] n = new int[30000];
    int count = 0;
    public MinStack() {
        
    }
    
    public void push(int val) {
        n[count++] = val;
    }
    
    public void pop() {
        count--;
    }
    
    public int top() {
        return n[count-1];
    }
    
    public int getMin() {
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < count; i++){
            if (n[i] < min) min = n[i];
        }
        return min;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */