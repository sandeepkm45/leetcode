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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *temp = head;
        ListNode *tempp = head->next;
        ListNode *prev = NULL;

        while(temp!=NULL && tempp!=NULL){
            ListNode *x = temp;
            ListNode *y = tempp;
            x->next = y->next;
            y->next = x;

            if(prev != NULL) prev->next = y;
            else head = y;
            
            prev = x;
            temp = x->next;
            if(temp != NULL) tempp = temp->next;
        }
        return head;
    }
};