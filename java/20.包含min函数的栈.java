import java.util.Stack;

public class Solution {

    Stack<Integer> minStack = new Stack<Integer>();
    Stack<Integer> st = new Stack<Integer>();
    public void push(int node) {
        st.push(node);
        minStack.push(minStack.empty() || minStack.peek() > node ? node: minStack.peek());
    }
    
    public void pop() {
        st.pop();
        minStack.pop();
    }
    
    public int top() {
        return st.peek();
    }
    
    public int min() {
        return minStack.peek();
    }
}
