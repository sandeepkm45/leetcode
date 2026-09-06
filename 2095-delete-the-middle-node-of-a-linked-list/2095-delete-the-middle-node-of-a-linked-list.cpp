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
 int count(ListNode* &head){
    if (head == NULL){
        return 0;
    }
    ListNode *temp = head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp = temp->next;
    }
    return c;
 }
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int c = count(head);
        if(c==1){
            // delete head;
            return NULL;
        }
        ListNode *temp = head;
        for (int i=0; i<c/2 - 1; i++){
            temp = temp->next;
        }
        ListNode *tempp = temp->next;
        if (temp->next->next!=NULL){
            temp->next = temp->next->next;
        }
        else{
            temp->next = NULL;
        }
        // delete tempp;
        return head;
    }
};