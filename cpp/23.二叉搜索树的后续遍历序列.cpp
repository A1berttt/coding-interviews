class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.empty())
            return false;
        return helper(sequence, 0, sequence.size());
    }
    
    bool helper(vector<int> seq, int l, int r){
        if(l == r)
            return true;
        int m = l;
        for(; m < r - 1 && seq[m] < seq[r - 1]; m++ );
        int j = m;
        for(; j < r - 1 && seq[j] > seq[r - 1]; j++);
        return j == r - 1 && helper(seq, l, m) && helper(seq, m, r - 1);
    }
};
