class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        bool flag[rows * cols];
        memset(flag, false, sizeof(flag));
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                if(helper(matrix, rows, cols, i, j, str, 0, flag))
                    return true;
        return false;
    }

    bool helper(char* matrix, int rows, int cols, int i, int j, char* str, int k, bool flag[]){
        int idx = i * cols + j;
        if(i >= rows || i < 0 || j < 0 || j >= cols || flag[idx] || matrix[idx] != str[k])
            return false;
        if(k == strlen(str) - 1)
            return true;
        flag[idx] = true;
        if(helper(matrix, rows, cols, i - 1, j, str, k + 1, flag) ||
          helper(matrix, rows, cols, i + 1, j, str, k + 1, flag) ||
          helper(matrix, rows, cols, i, j - 1, str, k + 1, flag) ||
          helper(matrix, rows, cols, i, j + 1, str, k + 1, flag))
            return true;
        flag[idx] = false;
        return false;
    }

};
