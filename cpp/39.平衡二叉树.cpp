class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        int depth = 0;
        return helper(pRoot, &depth);
    }
    
    bool helper(TreeNode* pRoot, int* depth){
        if(pRoot == nullptr){
            *depth = 0;
            return true;
        }
        int l_dep, r_dep;
        if(helper(pRoot -> left, &l_dep) && helper(pRoot -> right, &r_dep) && (abs(l_dep - r_dep) <= 1)){
            *depth = max(l_dep, r_dep) + 1;
            return true;
        }
        return false;
    }
};
