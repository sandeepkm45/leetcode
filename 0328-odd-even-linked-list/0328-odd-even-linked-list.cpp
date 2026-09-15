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
 int len(ListNode *head){
    if (head == NULL) return 0;
    ListNode *temp = head;
    int c=0;
    while(temp != NULL){
        c++;
        temp = temp->next;
    }
    return c;
 }
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL) {
            return head;
        }
        int c = len(head);
        ListNode *temp = head->next;
        for (int i=0; i<(c-1)/2; i++){
            ListNode *curr = temp;
            for(int j=(c-1)/2; j>i && curr!=NULL && curr->next!=NULL; j--){
                swap(curr->val,curr->next->val);
                curr = curr->next->next;
            }
            temp = temp->next;
        }
        return head;
    }
};