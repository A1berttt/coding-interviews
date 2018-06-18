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
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead == nullptr || pHead -> next == nullptr)
            return pHead;
        auto pre = ReverseList(pHead -> next);
        pHead -> next -> next = pHead;
        pHead -> next = nullptr;
        return pre;
    }
};
