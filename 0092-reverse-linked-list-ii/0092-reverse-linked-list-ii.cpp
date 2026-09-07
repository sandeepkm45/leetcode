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

ListNode* rev(ListNode* head, int n) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    for (int i = 0; i < n; i++) {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right) {
            return head;
        }
        if (left == 1) {
            ListNode* curr = head;
            for (int i = 1; i <= right; i++) {
                curr = curr->next;
            }
            ListNode* newHead = rev(head, right);
            head->next = curr;
            return newHead;
        }
        ListNode* prev = head;
        ListNode* curr = head;

        for (int i = 1; i < left - 1; i++) {
            prev = prev->next;
        }
        curr = prev->next;
        ListNode* tempp = curr;
        for (int i = left; i <= right; i++) {
            tempp = tempp->next;
        }
        prev->next = rev(curr, right - left + 1);

        curr->next = tempp;
        return head;
    }
};