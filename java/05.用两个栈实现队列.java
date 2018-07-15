import java.util.Stack;

public class Solution {
    Stack<Integer> stack1 = new Stack<Integer>();
    Stack<Integer> stack2 = new Stack<Integer>();
    
    public void push(int node) {
        stack1.push(node);
    }
    
    public int pop() {
        if(stack2.empty()){
            while(!stack1.empty()){
                int tmp = stack1.peek();
                stack2.push(tmp);
                stack1.pop();
            }
        }
        int ret = stack2.peek();
        stack2.pop();
        return ret;
    }
}
