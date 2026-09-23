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
    ListNode *newNode = new ListNode(val);
    if (head==NULL){
        head=newNode;
        return ;
    }
    ListNode *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
 }
 int gcd(int x, int y){
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
 }
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head==NULL || head->next==NULL) return head;
        ListNode *temp = head;
        ListNode *node = NULL;
        while(temp->next!=NULL){
            pushh(node, temp->val);
            int div;
            if (temp->val<temp->next->val){
                div = gcd(temp->val, temp->next->val);
            }
            else{
                div = gcd(temp->next->val, temp->val);
            }
            pushh(node, div);
            temp = temp->next;
        }
        pushh(node, temp->val);

        return node;
    }
};