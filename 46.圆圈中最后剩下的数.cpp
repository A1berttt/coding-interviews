class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
        if(!n)
            return -1;
        int ret = 0;
        for(int i = 2; i <= n; ret = (ret + m) % i++);
        return ret;
    }
};

/**
讲解：
https://blog.csdn.net/u011500062/article/details/72855826
**/
