class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> ret;
        if(matrix.empty())
            return ret;
        int up = 0, down = matrix.size(), left = 0, right = matrix[0].size();
        for(int i = 0, j = 0; up < down && left < right; left++, i++, j++){
            for(; left < right && up < down && j < right; j++)
                ret.push_back(matrix[i][j]);
            for(up++, i++, j--; left < right && up < down && i < down; i++)
                ret.push_back(matrix[i][j]);
            for(right--, i--, j--; left < right && up < down && j >= left; j--)
                ret.push_back(matrix[i][j]);
            for(down--, i--, j++; left < right && up < down && i >= up; i--)
                ret.push_back(matrix[i][j]);
        }
        return ret;
    }
};
