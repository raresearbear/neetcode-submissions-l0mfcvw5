/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public ListNode reverseList(ListNode head) {
        return reverseHelper(null, head);
    }
    ListNode reverseHelper(ListNode prev, ListNode curr) {
        if (curr == null) return prev;  // prev is new head
        ListNode next = curr.next;
        curr.next = prev;
        return reverseHelper(curr, next);
    }
}
