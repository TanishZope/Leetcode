
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;

        while (curr && count < k) {
            curr = curr->next;
            count++;
        }

        if (count < k) return head;

        ListNode *prev = NULL, *next = NULL;
        curr = head;
        count = 0;

        while (curr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
