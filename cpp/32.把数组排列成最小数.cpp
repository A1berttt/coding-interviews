class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        vector<string> svec(numbers.size());
        stringstream sin;
        for(int i = 0; i < (int)numbers.size(); i++){
            sin << numbers[i];
            sin >> svec[i];
            sin.clear();
        }
        sort(svec.begin(), svec.end(), cmp);
        string ret = "";
        for(auto iter = svec.begin(); iter != svec.end(); iter++)
            ret += *iter;
        return ret;
    }
    static bool cmp(const string &A, const string &B){
        return A + B < B + A;
    }
};
