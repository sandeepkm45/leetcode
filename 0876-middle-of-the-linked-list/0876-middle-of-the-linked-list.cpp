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
 int count(ListNode *head){
    if (head == NULL) return 0;
    ListNode * temp = head;
    int c = 0;
    while(temp!=NULL){
        c++;
        temp = temp->next;
    }
    return c;
 }
void push (ListNode* &head, int val){
    ListNode *newNode = new ListNode(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    ListNode * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    } temp->next = newNode;
}
 void pop (ListNode* &head){
    ListNode *temp = head;
    head = head->next;
    delete temp;
 }
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * headd = NULL;
        ListNode * temp = head;
        while(temp!=NULL){
            push(headd,temp->val);
            temp = temp->next;
        }
        int c = count(headd);
        for(int i=0; i<c/2; i++){
            pop(headd);
        }
        return headd;
    }
};