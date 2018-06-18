class Solution {
public:
    string LeftRotateString(string str, int n) {
        if(str.empty())
            return "";
        str += str;
        str = str.substr(n, str.size() / 2);
        return str;
    }
};
