class Solution {
public:
    int Sum_Solution(int n) {
        int ret = ((int)pow(n, 2) + n) >> 1;
        return ret;
    }
};
