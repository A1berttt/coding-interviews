class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index == 0)
            return 0;
        vector<int> ugly(index, 1), pos(3, 0), num({2, 3, 5});
        for(int i = 1; i < index; i++){
            vector<int> res(3);
            for(int j = 0; j < 3; j++)
                res[j] = num[j] * ugly[pos[j]];
            int min_num = min(min(res[0], res[1]), res[2]);
            ugly[i] = min_num;
            for(int j = 0; j < 3; j++)
                if(res[j] == min_num)
                    pos[j]++;
            
        }
        return ugly[index - 1];
    }
};
