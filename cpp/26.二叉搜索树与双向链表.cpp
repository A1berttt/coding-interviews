/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        TreeNode* pre = nullptr;
        return helper(pRootOfTree, pre);
    }
    
    TreeNode* helper(TreeNode* cur, TreeNode*& pre){
        if(cur == nullptr)
            return nullptr;
        auto ret = helper(cur -> left, pre);
        if(ret == nullptr)
            ret = cur;
        if(pre != nullptr)
            (pre) -> right = cur;
        cur -> left = pre;
        pre = cur;
        helper(cur -> right, pre);
        return ret;
    }
};
