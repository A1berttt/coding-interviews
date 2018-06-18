class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(array.empty())
            return false;
        int row = array.size(), col = array[0].size();
        int i = row - 1, j = 0;
        while(i >= 0 && j < col){
            if(array[i][j] > target)
                i--;
            else if(array[i][j] < target)
                j++;
            else
                return true;
        }
        return false;
    }
};
