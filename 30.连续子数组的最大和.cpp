class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int ret = array[0];
        if(array.size() < 1)
            return ret;
        for(int i = 1; i < array.size(); i++){
            array[i] = max(array[i], array[i] + array[i - 1]);
            ret = max(ret, array[i]);
        }
        return ret;
    }
};
