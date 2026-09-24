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
 ListNode *rev(ListNode *head, int k){
    ListNode *temp = head;
    ListNode *prev = NULL;
    for (int i=0; i<k; i++){
        ListNode *curr = temp->next;
        temp->next = prev;
        prev = temp;
        temp = curr;
    }
    head->next = temp;
    return prev;
 }
 int count(ListNode *head){
    if(head==NULL) return 0;
    int c=0;
    ListNode *temp = head;
    while(temp!=NULL){
        c++;
        temp = temp->next;
    }
    return c;
 }
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k == 1) return head;
        int c = count(head);
        ListNode *temp1 = head;
        ListNode *temp2 = NULL;
        ListNode *prev = NULL;

        for (int i=0; i<c/k; i++){
            temp2 = temp1;
            for(int j=1; j<k; j++){
                temp2 = temp2->next;
            }
            ListNode *newhead = rev(temp1,k);
            if(i==0){
                head = newhead;
            }
            else{
                prev->next = newhead;
            }
            prev = temp1;
            temp1 = temp1->next;
        }
        return head;
    }
};