class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int ret = 0;
        for(int power = 1, high = n / 10, low = 0, cur = n % 10; n / power;){
            ret += high * power + (cur == 0? 0: cur == 1? low + 1: power);
            power *= 10;
            high = n / power / 10;
            cur = n / power % 10;
            low = n % power;
        }
        return ret;
    }
};
