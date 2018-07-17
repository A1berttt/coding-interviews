public class Solution {
    public boolean VerifySquenceOfBST(int [] sequence) {
        if (sequence.length == 0)
            return false;
        else
            return helper(sequence, 0, sequence.length);
    }
    
    public boolean helper(int[] sequence, int l, int r) { 
        if (l == r)
            return true;
        int m = l, root = 0;
        while(m < r - 1 && sequence[m] < sequence[r - 1])
            m++;
        for( root = m; root < r - 1 && sequence[root] > sequence[r - 1]; root++);
        return root == r - 1 && helper(sequence, l, m) && helper(sequence, m, r - 1);
    }
}
