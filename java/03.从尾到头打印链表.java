/**
*    public class ListNode {
*        int val;
*        ListNode next = null;
*
*        ListNode(int val) {
*            this.val = val;
*        }
*    }
*
*/
import java.util.ArrayList;
public class Solution {
    ArrayList<Integer> ret = new ArrayList<Integer>();
    public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
        dfs(ret, listNode);
        return ret;
    }
    public void dfs(ArrayList<Integer> arr, ListNode pHead) {
        if(pHead == null)
            return;
        dfs(arr, pHead.next);
        ret.add(pHead.val);
    }
}
