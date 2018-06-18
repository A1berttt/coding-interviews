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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        queue<TreeNode*> tque;
        vector<int> ret;
        if(root == nullptr)
            return ret;
        tque.push(root);
        while(!tque.empty()){
            TreeNode *temp = tque.front();
            tque.pop();
            if(temp == nullptr)
                continue;
            ret.push_back(temp -> val);
            tque.push(temp -> left);
            tque.push(temp -> right);
        }
        return ret;
    }
};
