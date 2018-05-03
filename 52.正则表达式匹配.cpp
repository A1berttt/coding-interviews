class Solution {
public:
    bool match(char* str, char* pattern)
    {
        if(str == nullptr || pattern == nullptr)
            return false;
        return helper(str, pattern);
    }
    
    bool helper(char* str, char* pattern){
        if(*str == '\0' && *pattern == '\0')
            return true;
        if(*str != '\0' && *pattern == '\0')
            return false;
        if(*(pattern + 1) == '*'){
            if(*str == *pattern || *pattern == '.' && *str != '\0')
                return helper(str, pattern + 2) || helper(str + 1, pattern) || helper(str + 1, pattern + 2);
            else
                return helper(str, pattern + 2);
        }
        if(*str == *pattern || *pattern == '.' && *str != '\0')
            return helper(str + 1, pattern + 1);
        return false;
    }
};
