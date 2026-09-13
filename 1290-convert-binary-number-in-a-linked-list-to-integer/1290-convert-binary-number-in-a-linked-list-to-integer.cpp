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

ListNode* rev(ListNode* head){
    if (head == NULL || head->next == NULL){
        return head;
    }
    ListNode *prev = NULL;
    ListNode *curr = head;
    while (curr!=NULL){
        ListNode *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int n = 1;
        int num = 0;
        if (head == NULL){
            return 0;
        }
        head = rev(head);
        ListNode *temp = head;
        while(temp!=NULL){
            num = num + temp->val * n;
            n = n*2;
            temp = temp->next;
        }
        return num;
    }
};