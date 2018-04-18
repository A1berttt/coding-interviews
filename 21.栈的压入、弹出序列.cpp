class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.empty())
            return false;
        stack<int> ista;
        for(int i = 0, j = 0; i < pushV.size(); i++){
            ista.push(pushV[i]);
            while(j < popV.size() && ista.top() == popV[j]){
                ista.pop();
                j++;
            }
        }
        return ista.empty();
    }
};
