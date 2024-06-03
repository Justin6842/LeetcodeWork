import java.util.*;
class MyQueue {
        Stack<Integer> stack1 = new Stack<Integer>();
        Stack<Integer> stack2 = new Stack<Integer>();
    public MyQueue() {

    }
    
    public void push(int x) {
        stack1.add(x);
    }
    
    public int pop() {
        int s = stack1.size();
        for (int i = 0; i < s-1; i++){
            System.out.println(i);
            stack2.add(stack1.pop());
        }
        int x = stack1.pop();
        s = stack2.size();
        for (int i = 0; i < s; i++){
            stack1.add(stack2.pop());
        }
        return x;
    }
    
    public int peek() {
        int s = stack1.size();
        for (int i = 0; i < s-1; i++){
            stack2.add(stack1.pop());
        }
        int x = stack1.pop();
        stack1.add(x);
        s = stack2.size();
        for (int i = 0; i < s; i++){
            stack1.add(stack2.pop());
        }
        return x;
    }
    
    public boolean empty() {
        return (stack1.isEmpty());
    }
}

