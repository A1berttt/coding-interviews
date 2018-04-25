class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.empty() || data.size() < 2)
            return;
        int temp = 0;
        for(auto a: data)
            temp ^= a;
        int index = findLast1(temp);
        for(auto a: data){
            if(is1(a, index))
                *num1 ^= a;
            else
                *num2 ^= a;
        }
    }
    
    int findLast1(int num){
        int index = 0;
        while((num & 1) == 0 && index < 32){
            index++;
            num = num >> 1;
        }
        return index;
    }
    
    bool is1(int a, int index){
        while(index--)
            a = a >> 1;
        return a & 1 == 1;
    }
};
