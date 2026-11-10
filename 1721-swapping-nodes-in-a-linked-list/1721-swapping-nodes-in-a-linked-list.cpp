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
ListNode* rev(ListNode* &head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr != NULL){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
ListNode* find(ListNode* &head, int x){
    int c=1;
    ListNode* temp = head;
    while(temp!=NULL && c!=x){
        c++;
        temp = temp->next;
    }
    return temp;
}
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* x = find(head, k);
        head = rev(head);
        ListNode* y = find(head, k);
        head = rev(head);
        if(x!=NULL && y!=NULL){
            swap(x->val, y->val);
        }
        return head;
    }
};