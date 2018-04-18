class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int length = array.size();
        vector<int> helper(array);
        int j = 0;
        for(int i = 0; i < length; i++){
            if(helper[i] % 2)
                array[j++] = helper[i];
        }
        j = length - 1;
        for(int i = length - 1; i >= 0; i--)
            if(helper[i] % 2 == 0)
                array[j--] = helper[i];
    }
};
