/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(pHead == nullptr)
            return nullptr;
        RandomListNode *ret = pHead, *p = pHead;
        for(;p != nullptr; p = p -> next -> next){
            RandomListNode* cur = new RandomListNode(p -> label);
            cur -> next = p -> next;
            p -> next = cur;
        }
        for(p = pHead; p != nullptr; p = p -> next -> next){
            if(p -> random != nullptr)
                p -> next -> random = p -> random -> next;
        }
        for(p = pHead, ret = p -> next; p -> next != nullptr;){
            pHead = p -> next;
            p -> next = p -> next -> next;
            p = pHead;
        }
        return ret;
    }
};
