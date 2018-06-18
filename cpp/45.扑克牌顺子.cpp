class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.size() != 5)
            return false;
        int cnt = 0, sum = 0;
        sort(numbers.begin(), numbers.end());
        for(int i = 0; i < 5; i++){
            if(numbers[i] == 0)
                cnt++;
            else{
                if(i > cnt && numbers[i] == numbers[i - 1])
                    return false;
                if(i > cnt && numbers[i] != numbers[i - 1])
                    sum += (numbers[i] - numbers[i - 1] - 1);
            }
        }
        return cnt >= sum;
    }
};
