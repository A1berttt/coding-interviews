class Solution {
public:
	void replaceSpace(char *str,int length) {
        int cnt = 0;
        for(int i = 0; i < length; i++)
            if(str[i] == ' ')
                cnt++;
        str = (char*)realloc(str, length + 2 * cnt);
        for(int j = length, i = length + 2 * cnt; i >=0;i--, j--){
            if(str[j] != ' ')
                str[i] = str[j];
            else{
                str[i--] = '0';
                str[i--] = '2';
                str[i] = '%';
            }
        }
	}
};
