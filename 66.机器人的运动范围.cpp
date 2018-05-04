class Solution {
    int bitSum(int x){
        int sum = 0;
        while(x != 0){
            sum += (x % 10);
            x /= 10;
        }
        return sum;
    }
public:
    int movingCount(int threshold, int rows, int cols)
    {
        bool flag[rows * cols];
        memset(flag, false, sizeof(flag));
        return helper(threshold, 0, 0, rows, cols, flag);
    }
    
    int helper(int threshold, int i, int j, int rows, int cols, bool flag[]){
        int idx = i * cols + j;
        int sum = bitSum(i) + bitSum(j);
        if(i < 0 || j < 0 || i >= rows || j >= cols || flag[idx] || sum > threshold)
            return 0;
        flag[idx] = true;
        return(helper(threshold, i - 1, j, rows, cols, flag) + 
              helper(threshold, i + 1, j, rows, cols, flag) + 
              helper(threshold, i, j - 1, rows, cols, flag) +
              helper(threshold, i, j + 1, rows, cols, flag) + 
              1);
    }
};
