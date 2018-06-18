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
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(pRoot == nullptr)
            return true;
        return helper(pRoot -> left, pRoot -> right);
    }
    
    bool helper(TreeNode* l, TreeNode* r){
        if(l == nullptr && r == nullptr)
            return true;
        else if(l != nullptr && r != nullptr)
            return l -> val == r -> val && helper(l -> left, r -> right) && helper(l -> right, r -> left);
        else 
            return false;
    }

};
