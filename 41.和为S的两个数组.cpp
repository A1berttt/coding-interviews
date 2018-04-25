class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> ret;
        if(array.size() < 2)
            return ret;
        int l = 0, r = array.size() - 1;
        while(l < r){
            if(array[l] + array[r] < sum)
                l++;
            else if(array[l] + array[r] > sum)
                r--;
            else{
                ret.push_back(array[l]);
                ret.push_back(array[r]);
                break;
            }
        }
        return ret;
    }
};
