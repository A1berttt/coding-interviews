/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<int> istk;
        vector<int> ret;
        while(head != nullptr){
            istk.push(head->val);
            head = head -> next;
        }
        while(!istk.empty()){
            ret.push_back(istk.top());
            istk.pop();
        }
        return ret;
    }
};
