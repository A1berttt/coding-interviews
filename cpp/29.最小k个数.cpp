class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> ret;
        int len = input.size();
        if(len == 0 || k <= 0 || k > len)
            return ret;
        
        multiset<int, greater<int>> iset;
        for(auto iter = input.begin(); iter != input.end(); iter++){
            if(iset.size() < k)
                iset.insert(*iter);
            else{
                if(*iter < *iset.begin()){
                    iset.erase(iset.begin());
                    iset.insert(*iter);
                }
            }
        }
        for(auto iterIset = iset.begin(); iterIset != iset.end(); iterIset++)
            ret.push_back(*iterIset);
        return ret;
    }
};
