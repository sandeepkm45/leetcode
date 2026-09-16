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
 ListNode* rev (ListNode *head){
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(curr!=NULL){
        ListNode* nextNode = curr->next; 
        curr->next = prev;               
        prev = curr;                     
        curr = nextNode;
    }
    return prev;
 }
ListNode* rev(ListNode* head, int n) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    for (int i = 0; i < n; i++) {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL) return head;
        int n = len(head);
        if (n==1) return head;
        
        if (k>n){
            while(k>n){
                k = k%n;
            }
        }
        if (k==n || k==0) return head;
        head = rev(head);
        ListNode *temp = head;
        ListNode *tempp = head;
        for (int i=1; i<=k; i++){
            temp = temp->next;
        }
        head = rev(head,k);
        ListNode *node = rev(temp);
        tempp->next=node;

        return head;
    }
};