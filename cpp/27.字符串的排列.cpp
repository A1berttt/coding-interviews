class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> ret;
        if(str.size() == 0)
            return ret;
        set<string> sset;
        sort(str.begin(), str.end());
        do
            sset.insert(str);
        while(next_permutation(str.begin(), str.end()));
        for(auto it = sset.begin(); it != sset.end(); ret.push_back(*it++));
        return ret;
    }
};

/**
class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> ret;
        if (str.size() == 0)
            return ret;
        sort(str.begin(), str.end());
        permutation(str, ret, 0);
        return ret;
    }
    void permutation(string str, vector<string> &ret, unsigned int start)
    {
        if (start == str.size() - 1) {
            ret.push_back(str);
            return ;
        }
        for (unsigned int i = start; i < str.size(); i++) {
            if (i == start || str[i] != str[start]) {
                swap(str[i], str[start]);
                permutation(str, ret, start + 1);
                // swap(str[i], str[start]);
            }
        }
    }
};
**/
