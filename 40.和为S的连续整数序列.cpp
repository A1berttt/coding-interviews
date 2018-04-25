class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> ret;
        if(sum < 3)
            return ret;
        int l = 1, r = 2, m = sum / 2;
        int curSum = l + r;
        while(l <= m){
            if(curSum < sum){
                r++;
                curSum += r;
            }
            else if(curSum > sum){
                curSum -= l;
                l++;
            }
            else{
                helper(ret, l, r);
                curSum -= l;
                l++;
            }
        }
        return ret;
    }
    
    void helper(vector<vector<int>>& ret, int l, int r){
        vector<int> ivec;
        for(int i = l; i <= r; i++)
            ivec.push_back(i);
        ret.push_back(ivec);
    }
};
