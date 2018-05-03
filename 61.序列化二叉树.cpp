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
    vector<int> buf;
    void dfs(TreeNode* pNode){
        if(pNode == nullptr)
            buf.push_back(0x3f3f3f3f);
        else{
            buf.push_back(pNode -> val);
            dfs(pNode -> left);
            dfs(pNode -> right);
        }
    }
    
    TreeNode* reDfs(int*& p){
        if(*p == 0x3f3f3f3f){
            p++;
            return nullptr;
        }
        else{
            TreeNode* res = new TreeNode(*p);
            p++;
            res -> left = reDfs(p);
            res -> right = reDfs(p);
            return res;
        }
    }
public:
    char* Serialize(TreeNode *root) {    
        buf.clear();
        dfs(root);
        int* ret = new int[buf.size()];
        for(int i = 0; i < buf.size(); i++)
            ret[i] = buf[i];
        return (char*) ret;
    }
    TreeNode* Deserialize(char *str) {
        int* p = (int*) str;
        return reDfs(p);
    }
};
