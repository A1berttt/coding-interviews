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
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int>> ret;
        vector<int> arr;
        if(pRoot == nullptr)
            return ret;
        queue<TreeNode*> tque;
        TreeNode *pre = pRoot, *cur = nullptr;
        tque.push(pRoot);
        while(!tque.empty()){
            TreeNode* temp = tque.front();
            tque.pop();
            arr.push_back(temp -> val);
            if(temp -> left != nullptr){
                tque.push(temp -> left);
                cur = temp -> left;
            }
            if(temp -> right != nullptr){
                tque.push(temp -> right);
                cur = temp -> right;
            }
            if(pre == temp){
                ret.push_back(arr);
                arr.clear();
                pre = cur;
            }
        }
        return ret;
    }
};
