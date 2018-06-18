class Solution {
public:
    bool isNumeric(char* string)
    {
        if(*string == '.')
            return allNum(string + 1);
        if(*string == '+' || *string == '-')
            return afterSym(string + 1);
        return afterSym(string);
    }
    
    bool allNum(char* str){
        char* it = str;
        while(*it != '\0')
            if(!isdigit(*it))
                return false;
            else
                it++;
        return true;
    }
    
    bool afterSym(char* str){
        while(isdigit(*str))
            str++;
        if(*str == '\0')
            return true;
        if(*str == '.'){
            do 
                str++;
            while(isdigit(*str));
            if(*str == '\0')
                return true;
            if (*str == 'E' || *str == 'e')
                return sciNum(str + 1);
            else 
                return false;
        }
        if(*str == 'E' || *str == 'e')
            return sciNum(str + 1);
        else
            return false;
    }
    
    bool sciNum(char* str){
        if(*str == '+' || *str == '-')
            return allNum(str + 1);
        if(*str == '\0')
            return false;
        return allNum(str + 1);
    }

};
