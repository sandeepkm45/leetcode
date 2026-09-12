/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head==NULL) return NULL;
        ListNode *temp = head;
        while(temp!=NULL){
            if (temp->next == temp) return temp;
            ListNode *curr = head;
            while(curr!=temp){
                if (temp->next==curr){
                    return curr;
                }
                curr=curr->next;
            }
            temp = temp->next;
        }
        return NULL;
    }
};