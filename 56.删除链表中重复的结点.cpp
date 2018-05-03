/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead == nullptr || pHead -> next == nullptr)
            return pHead;
        ListNode* ret = new ListNode(INT_MAX);
        ret -> next = pHead;
        ListNode* pre = ret;
        ListNode* fst = pHead;
        ListNode* lst = pHead -> next;
        bool flag = false;
        while(lst != nullptr){
            if(lst -> val != fst -> val && !flag){
                pre = pre -> next;
                lst = lst -> next;
                fst = fst -> next;
            }
            else if(lst -> val == fst -> val){
                lst = lst -> next;
                flag = true;
            }
            else if(lst -> val != fst -> val && flag){
                pre -> next = lst;
                fst = lst;
                lst = lst -> next;
                flag = false;
            }
        }
        flag? pre -> next = nullptr: fst -> next = nullptr;
        return ret -> next;
    }
};
