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
void pushh(ListNode* &head,int val){
    ListNode * newNode = new ListNode(val);
    if (head == NULL){
        head = newNode;
    }
    else {
         ListNode * temp = head;
         while (temp->next != NULL){
            temp = temp->next;
         }
         temp->next = newNode;
    }
}

void sortt(ListNode*& head) {
    if (head == NULL || head->next == NULL)
        return;

    ListNode* temp1 = head;

    while (temp1 != NULL) {
        ListNode* temp2 = temp1->next;

        while (temp2 != NULL) {
            if (temp1->val > temp2->val) {
                int temp = temp1->val;
                temp1->val = temp2->val;
                temp2->val = temp;
            }

            temp2 = temp2->next;
        }

        temp1 = temp1->next;
    }
}
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if (list2==NULL){
            return list1;
        }
        ListNode* head = new ListNode;
        head = NULL;
        ListNode * temp1 = list1;
        ListNode * temp2 = list2;

        while (temp1 != NULL && temp2 != NULL){
            if (temp1->val < temp2->val){
                pushh(head,temp1->val);
                pushh(head,temp2->val);
            }
            else if (temp1->val == temp2->val){
                pushh(head,temp1->val);
                pushh(head,temp2->val);
            }
            else{
                pushh(head,temp2->val);
                pushh(head,temp1->val);
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if (temp1==NULL){
            while (temp2 != NULL){
                pushh(head,temp2->val);
                temp2=temp2->next;
            }
        }
        else if (temp2==NULL){
            while (temp1 != NULL){
                pushh(head,temp1->val);
                temp1=temp1->next;
            }
        }
        sortt(head);
        return head;

    }
};