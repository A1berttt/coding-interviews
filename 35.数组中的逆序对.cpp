class Solution {
public:
    int InversePairs(vector<int> data) {
        if(data.empty())
            return 0;
        return (int)dfs(data, 0, data.size());
    }
    
    long long dfs(vector<int>& data, int l, int r){
        if(r - l == 1)
            return 0;
        const long long  MOD = 1000000007;
        int mid = (l + r) / 2;
        int ret = (dfs(data, l, mid) % MOD + dfs(data, mid, r) % MOD) % MOD;
        vector<int> temp;
        int pl = l, pr = mid;
        while(pl < mid && pr < r){
            if(data[pl] > data[pr]){
                temp.push_back(data[pr++]);
                ret = (ret + mid - pl) % MOD;
            }
            else
                temp.push_back(data[pl++]);
        }
        while(pl < mid)
            temp.push_back(data[pl++]);
        while(pr < r)
            temp.push_back(data[pr++]);
        for (int i = 0; l < r; data[l++] = temp[i++]);
        return ret % MOD;
    }
};
