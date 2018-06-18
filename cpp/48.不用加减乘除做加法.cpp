class Solution {
public:
    int Add(int num1, int num2)
    {
        int ret = num1, a = num2;
        while(a){
            ret = num1 ^ num2;
            a = (num1 & num2) << 1;
            num1 = ret;
            num2 = a;
        }
        return ret;
    }
};
