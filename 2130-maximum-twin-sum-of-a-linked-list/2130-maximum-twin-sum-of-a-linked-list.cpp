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
ListNode *rev(ListNode* head){ 
    ListNode *temp = head; 
    ListNode *prev = NULL; 
    while(temp!=NULL){ 
        ListNode *curr = temp->next; 
        temp->next = prev; 
        prev = temp; 
        temp = curr;
    }
    return prev; 
}
class Solution {
public:
    int pairSum(ListNode* head) {
        if (head==NULL) return -1;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *newhead = rev(slow);
        ListNode *temp1 = head;
        ListNode *temp2 = newhead;
        int maxx = INT_MIN;
        while(temp1!=NULL && temp2!=NULL){
            maxx = max(maxx, temp1->val+temp2->val);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return maxx;
    }
};