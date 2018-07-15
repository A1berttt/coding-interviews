public class Solution {
    public static double Power(double base, int exponent) {
        boolean flag = exponent < 0;
        if ( (exponent = Math.abs(exponent)) == 0)
            return 1.0;
        double ret = Power(base, exponent / 2);
        ret = exponent % 2 != 0? ret * ret * base: ret * ret;
        return flag? 1.0 / ret: ret;
    }
}
