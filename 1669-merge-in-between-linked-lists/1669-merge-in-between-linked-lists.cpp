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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if (list1==NULL) return list2;
        ListNode *temp1 = list1;
        ListNode *temp2 = list1;
        for (int i=1; i<a && temp1!=NULL; i++){
            temp1 = temp1->next;
        }
        for (int i=0; i<b && temp2!=NULL; i++){
            temp2 = temp2->next;
        }
        if (list2==NULL){
            temp1->next = temp2->next;
        }
        else {
            temp1->next = list2;
            ListNode* temp = list2;
            while (temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = temp2->next;
        }
        return list1;
    }
};