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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *curr;
        while(temp1!=NULL && temp2!=NULL){
            int no = temp1->val+temp2->val + carry;
            if(no>=10) carry = 1;
            else carry = 0;
            temp1->val = no%10;
            curr = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1!=NULL){
            int no = temp1->val +carry;
            if(no>=10) carry = 1;
            else carry = 0;
            temp1->val = no%10;
            curr = temp1;
            temp1 = temp1->next;
        }
        if(temp2!=NULL){
            curr->next = temp2;
        }

        while(temp2!=NULL){
            int no = temp2->val + carry;
            if(no>=10) carry = 1;
            else carry = 0;
            temp2->val = no % 10;
            curr = temp2;
            temp2 = temp2->next;
        }
        if(carry==1){
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
        }
        return l1;
    }
};