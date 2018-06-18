/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(k == 0)
            return nullptr;
        ListNode* forP = pListHead, *bacP = pListHead;
        for(int i = 1; i < k && forP != nullptr; i++)
            forP = forP -> next;
        if(forP == nullptr)
            return nullptr;
        while(forP -> next != nullptr){
            forP = forP -> next;
            bacP = bacP -> next;
        }
        return bacP;
    }
};
