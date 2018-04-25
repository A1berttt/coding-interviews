class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        if(data.empty())
            return 0;
        return helper(data, k + 0.5) - helper(data, k - 0.5);
    }
    
    int helper(const vector<int>& data, int k){
        int l = 0, r = data.size() -1;
        while(l <= r){
            int m = (l + r) / 2;
            if(data[m] > k)
                r = m - 1;
            else
                l = m + 1;
        }
        return l;
    }
};
