class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> ret;
        deque<int> indexDeq;
        for(int i = 0; i < num.size(); i++){
            if(!indexDeq.empty() && i - indexDeq.front() >= size)
                indexDeq.pop_front();
            while(!indexDeq.empty() && num[indexDeq.back()] < num[i])
                indexDeq.pop_back();
            indexDeq.push_back(i);
            if(i >= size - 1)
                ret.push_back(num[indexDeq.front()]);
        }
        return ret;
    }
};
