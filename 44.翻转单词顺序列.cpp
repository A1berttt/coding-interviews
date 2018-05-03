class Solution {
public:
    string ReverseSentence(string str) {
        stack<string> sstk;
        int pos, pre;
        for(pre = 0, pos = str.find(" ", pre); pos != string::npos;){
            sstk.push(str.substr(pre, pos - pre));
            pre = pos + 1;
            pos = str.find(" ", pre);
        }
        string ret(str.substr(pre));
        while(!sstk.empty()){
            ret += (" " + sstk.top());
            sstk.pop();
        }
        
        return ret;
    }
};
