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
    bool hasCycle(ListNode *head) {
        if (head==NULL) return false;
        ListNode *temp = head;
        while(temp!=NULL){
            if (temp->next == temp) return true;
            ListNode *curr = head;
            while(curr!=temp){
                if (temp->next==curr){
                    return true;
                }
                curr=curr->next;
            }
            temp = temp->next;
        }
        return false;
    }
};