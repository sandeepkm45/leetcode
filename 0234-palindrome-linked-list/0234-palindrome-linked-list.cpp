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

void pushh(ListNode* &head, int val){
    ListNode * newNode = new ListNode(val);
    if (head==NULL){
        head = newNode;
        return ;
    }
    newNode->next = head;
    head = newNode;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head==NULL) return false;
        ListNode * headd = new ListNode;
        headd = NULL;
        ListNode * temp = head;
        while(temp!=NULL){
            pushh(headd,temp->val);
            temp = temp->next;
        }

        temp = head;
        ListNode * tempp = headd;
        while(temp!=NULL){
            if(temp->val != tempp->val) return false;
            temp = temp->next;
            tempp = tempp->next;
        }
        return true;
    }
};

