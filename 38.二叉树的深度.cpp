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
    int TreeDepth(TreeNode* pRoot)
    {
        int depth = 0;
        return helper(pRoot, depth);
    }
    
    int helper(TreeNode* pRoot, int depth){
        if(pRoot == nullptr)
            return depth;
        depth = max(helper(pRoot -> left, depth + 1), helper(pRoot -> right, depth + 1));
        return depth;
    }
};
