class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        // 1. Find middle (slow/fast)
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse second half
        ListNode* second = reverseHelper(nullptr, slow->next);
        slow->next = nullptr; // 🔑 CUT the list

        // 3. Merge
        ListNode* first = head;

        while (second) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;

            first->next = second;
            second->next = tmp1;

            first = tmp1;
            second = tmp2;
        }
    }

    ListNode* reverseHelper(ListNode* prev, ListNode* curr) {
        if (curr == nullptr) return prev;
        ListNode* next = curr->next;
        curr->next = prev;
        return reverseHelper(curr, next);
    }
};
