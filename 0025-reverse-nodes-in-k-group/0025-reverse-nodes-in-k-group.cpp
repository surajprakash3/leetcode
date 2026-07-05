class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;

        for (int i = 0; i < k; i++) {
            if (!temp)
                return head;
            temp = temp->next;
        }

        ListNode* prev = reverseKGroup(temp, k);

        while (k--) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }
};