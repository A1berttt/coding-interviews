class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if(str.empty())
            return -1;
        map<char, int> cimap;
        for(auto sit = str.begin(); sit != str.end(); sit++)
            cimap[*sit]++;
        for(auto sit = str.begin(); sit != str.end(); sit++)
            if(cimap[*sit] == 1)
                return sit - str.begin();
        return -1;
    }
};
