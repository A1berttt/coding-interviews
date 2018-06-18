class Solution {
    priority_queue<int, vector<int>, less<int>> big;
    priority_queue<int, vector<int>, greater<int>> little;
    
    void helper(){
        if(big.empty())
            return;
        int l = little.top(), b = big.top();
        if(l < b){
            little.pop();
            big.pop();
            little.push(b);
            big.push(l);
        }
    }
public:
    void Insert(int num)
    {
        if(little.size() == big.size())
            little.push(num);
        else
            big.push(num);
        helper();
    }

    double GetMedian()
    { 
        if(little.size() == big.size())
            return (little.top() + big.top()) / 2.0;
        else
            return little.top();
    }

};
