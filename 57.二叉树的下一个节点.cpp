/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode == nullptr)
            return nullptr;
        if(pNode -> right != nullptr){
            for(pNode = pNode -> right; pNode -> left != nullptr; pNode = pNode -> left);
            return pNode;
        }
        while(pNode -> next != nullptr && pNode -> next -> right == pNode)
            pNode = pNode -> next;
        return pNode -> next == nullptr? nullptr: pNode -> next;
    }
};
