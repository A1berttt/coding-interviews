class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        auto ret = helper(numbers, 2);
        return ret.size() == 0? 0: ret[0];
    }
    
    vector<int> helper(vector<int> numbers, int k){
        map<int, int>mp;
        for(int i = 0; i< numbers.size(); i++){
            if(mp.find(numbers[i]) != mp.end())
                mp[numbers[i]]++;
            else if(mp.size() < k - 1)
                mp[numbers[i]] = 1;
            else{
                for(auto it = mp.begin(); it != mp.end(); it -> second--, it++);
                for(auto it = mp.begin(); it != mp.end(); !it -> second? it = mp.erase(it): it++);
            }
        }
        
        vector<int> ret;
        for(auto it = mp.begin(); it != mp.end(); it++){
            int cnt = 0;
            for(int i = 0; i < numbers.size(); i++){
                cnt += (numbers[i] == it -> first);
            }
            if(cnt > numbers.size() / k)
                ret.push_back(it -> first);
        }
        return ret;
    }
};
