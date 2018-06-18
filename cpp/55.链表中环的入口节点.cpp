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
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(pHead == nullptr || pHead -> next == nullptr)
            return nullptr;
        ListNode* fastP = pHead;
        ListNode* slowP = pHead;
        do{
            fastP = fastP -> next -> next;
            slowP = slowP -> next;
        }
        while(fastP != nullptr && fastP -> next != nullptr && fastP != slowP);
        if(fastP == nullptr || fastP -> next == nullptr)
            return nullptr;
        else{
            fastP = pHead;
            while(fastP != slowP){
                fastP = fastP -> next;
                slowP = slowP -> next;
            }
            return fastP;
        }
    }
};
