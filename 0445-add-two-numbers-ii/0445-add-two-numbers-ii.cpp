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
 ListNode* rev(ListNode *head){
    ListNode *prev = NULL;
    ListNode *curr = head;
    while(curr!=NULL){
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
 }
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        l1 = rev(l1);
        l2 = rev(l2);
        ListNode* temp1 = l1; 
        ListNode* temp2 = l2;
        int c=0;
        ListNode *tempp;
        while(temp1!=NULL && temp2!=NULL){
            int sum = temp1->val + temp2->val + c;
            if (sum>9) c=1;
            else c=0;
            temp1->val = sum%10;
            tempp = temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp2!=NULL){
            temp1 = l1;
            while(temp1->next != NULL) temp1 = temp1->next;
            temp1->next = temp2;
            temp1 = temp2;
        }
        while(temp1!=NULL){
            int sum = temp1->val + c;
            if(sum > 9) c=1;
            else c=0;
            temp1->val = sum % 10;
            tempp = temp1;
            temp1 = temp1->next;
        }
        if(c==1){
            ListNode *newnode = new ListNode(c);
            tempp->next=newnode;
        }
        return rev(l1);
    }
};