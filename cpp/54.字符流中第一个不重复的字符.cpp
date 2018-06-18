class Solution
{
private:
    int used[1 << 7];
    queue<char> cque;
public:
  //Insert one char from stringstream
    Solution(){
        memset(used, 0, sizeof(used));
    }
    void Insert(char ch)
    {
         if(++used[ch] == 1)
             cque.push(ch);
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        while(!cque.empty() && used[cque.front()] != 1)
            cque.pop();
        return cque.empty()? '#': cque.front();
    }

};
