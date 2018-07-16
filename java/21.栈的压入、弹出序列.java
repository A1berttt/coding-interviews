import java.util.ArrayList;
import java.util.Stack;

public class Solution {
    public boolean IsPopOrder(int [] pushA,int [] popA) {
        Stack<Integer> st = new Stack<Integer>();
        int cnt = 0;
        for (int i = 0; i < pushA.length; i++) {
            st.push(pushA[i]);
            while (cnt < popA.length && popA[cnt] == st.peek()){
                st.pop();
                cnt++;
            }
        }
        return st.empty();
    }
}
