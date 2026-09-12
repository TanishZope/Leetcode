/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
          if (head == nullptr || k <= 1) return head;

    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;

    ListNode* temp = head;
    int count = 0;
    while (temp != nullptr && count < k) {
        temp = temp->next;
        count++;
    }

    if (count < k) return head;

    count = 0;
    while (curr != nullptr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    
    if (next != nullptr) {
        head->next = reverseKGroup(next, k);
    }
    return prev;
    }
};