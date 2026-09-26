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
    vector<int> nextLargerNodes(ListNode* head) {
        vector <int> v;
        if(head==NULL) return v;
        ListNode *temp1 = head;
        while(temp1!=NULL){
            ListNode *temp2 = temp1->next;
            while(temp2!=NULL){
                if(temp2->val>temp1->val) break;
                else{
                    temp2 = temp2->next;
                }
            }
            if(temp2==NULL){
                v.push_back(0);
            }
            else{
                v.push_back(temp2->val);
            }
            temp1=temp1->next;
        }
        return v;
    }
};