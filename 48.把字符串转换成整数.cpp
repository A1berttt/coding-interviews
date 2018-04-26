class Solution {
public:
    int StrToInt(string str) {
        if (str.size() == 0)
            return 0;
        string digit = "";
        for (auto it = str.begin(); it != str.end(); ++it)
            if (!isspace(*it))
                digit.push_back(*it);
        bool f = true;
        if (digit[0] == '+' || digit[0] == '-')
            f = digit[0] == '+', digit = digit.substr(1);
        for (auto it = digit.begin(); it != digit.end(); ++it)
            if (isalpha(*it))
                return false;
        int ret = 0;
        for (auto it = digit.begin(); it != digit.end(); ++it)
            ret = ret * 10 + *it - '0';
        return f ? ret : -ret;
    }
};
