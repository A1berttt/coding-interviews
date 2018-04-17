class Solution {
public:
    double Power(double base, int exponent) {
        return exponent < 0? 1.0 / helper(base, exponent): helper(base, exponent);
    }
    double helper(double base, int exponent){
        if(exponent == 0)
            return 1.0;
        double ret = helper(base, exponent / 2);
        ret = exponent % 2? ret * ret * base: ret * ret;
        return ret;
    }
};
