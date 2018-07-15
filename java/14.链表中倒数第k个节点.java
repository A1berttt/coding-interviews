/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode FindKthToTail(ListNode head,int k) {
        if(head == null || k <= 0)
            return null;
        ListNode pre = head;
        ListNode now = head; 
        while(k-- != 0) {
            if(pre == null)
                return null;
            pre = pre.next;
        }
        while(pre != null) {
            pre = pre.next;
            now = now.next;
        }
        return now;
    }
}
