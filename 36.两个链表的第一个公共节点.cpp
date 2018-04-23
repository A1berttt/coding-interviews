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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        int len1 = 0, len2 = 0;
        for(auto p1 = pHead1; p1 != nullptr; p1 = p1 -> next)
            len1++;
        for(auto p2 = pHead2; p2 != nullptr; p2 = p2 -> next)
            len2++;
        ListNode* longNode = nullptr, *shortNode = nullptr;
        if(len1 > len2)
            longNode = pHead1, shortNode = pHead2;
        else
            longNode = pHead2, shortNode = pHead1;
        for(int i = 0; i < abs(len1 - len2); i++)
            longNode = longNode -> next;
        while(longNode != nullptr && shortNode != nullptr){
            if(longNode == shortNode)
                return longNode;
            longNode = longNode -> next;
            shortNode = shortNode -> next;
        }
        return nullptr;
    }
};
