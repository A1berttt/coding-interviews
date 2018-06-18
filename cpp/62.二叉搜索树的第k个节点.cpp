/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        int cnt = 0;
        return dfs(pRoot, k, cnt);
    }
    
    TreeNode* dfs(TreeNode* p, int k, int& cnt){
        if(!k || p == nullptr)
            return nullptr;
        TreeNode* ret = dfs(p -> left, k, cnt);
        if(ret == nullptr)
            return ++cnt == k? p: dfs(p -> right, k, cnt);
        return ret;
    }
    
};
