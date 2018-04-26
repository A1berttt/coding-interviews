class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> ret(A.size(), 1);
        if(A.size() < 2)
            return ret;
        for(int i = 1; i < A.size(); i++)
            ret[i] = ret[i - 1] * A[i - 1];
        for(int i = A.size() - 2, temp = 1; i >= 0; i--){
            temp *= A[i + 1];
            ret[i] *= temp;
        }
            return ret;
    }
};
