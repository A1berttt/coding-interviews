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
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> ret;
        vector<int> path;
        dfs(root, expectNumber, ret, path);
        return ret;
    }
    void dfs(TreeNode *root, int sum, vector<vector<int>> &ret, vector<int> &path){
        if(root == nullptr)
            return;
        path.push_back(root -> val);
        if(root -> left == nullptr && !root -> right && sum == root -> val)
            ret.push_back(path);
        if(root -> left)
            dfs(root -> left, sum - root -> val, ret, path);
        if(root -> right)
            dfs(root -> right, sum - root -> val, ret, path);
        path.pop_back();
    }
};
