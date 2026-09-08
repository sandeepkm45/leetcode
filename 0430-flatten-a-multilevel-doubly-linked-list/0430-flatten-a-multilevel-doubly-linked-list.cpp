/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL){
            return head;
        }
        Node * temp = head;
        while(temp!=NULL){
            if (temp->child!=NULL){
                Node *temp1 = temp->next;
                Node *temp2 = temp->child;
                temp2->prev = temp;
                temp->next = temp2;
                temp->child = NULL;
                while(temp2->next!=NULL){
                    temp2 = temp2->next;
                }
                if(temp1!=NULL){
                    temp1->prev = temp2;
                    temp2->next = temp1;
                }
                
            }
            temp = temp->next;
        }
        return head;
    }
};