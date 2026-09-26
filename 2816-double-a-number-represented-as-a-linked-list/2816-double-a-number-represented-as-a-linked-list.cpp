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
 ListNode *rev(ListNode *head){
    if(head==NULL || head->next==NULL) return head;
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
    ListNode* doubleIt(ListNode* head) {
        int carry = 0;
        if(head==NULL) return head;
        if(head->next==NULL){
            int no = head->val*2;
            if(no>=10) carry = 1;
            else carry = 0;
            head->val = no%10;
            if (carry == 1){
                ListNode *newnode = new ListNode(carry);
                newnode->next = head;
                head = newnode;
            }
            return head;
        }
        ListNode *temp1 = rev(head);
        ListNode *temp = temp1;
        
        ListNode *curr;
        while(temp!=NULL){
            int no = temp->val*2 + carry;
            if(no>=10) carry = 1;
            else carry = 0;
            temp->val = no%10;
            curr = temp;
            temp = temp->next;

        }
        if (carry == 1){
            ListNode *newnode = new ListNode(carry);
            curr->next = newnode;
        }
        head = rev(temp1);
        return head;
    }
};