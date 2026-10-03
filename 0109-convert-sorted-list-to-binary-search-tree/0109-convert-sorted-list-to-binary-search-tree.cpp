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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
  TreeNode* insert(TreeNode* &root, int val){
    if(root==NULL) return new TreeNode(val);
    if(val>root->val){
        root->right = insert(root->right, val);
    }
    if(val<root->val){
        root->left = insert(root->left, val);
    }
    return root;
 }
 void rec(TreeNode* &root, int i, int j, vector <int> v){
    if(i>j) return;
    int mid = i+(j-i)/2;
    root = insert(root, v[mid]);
    rec(root, i, mid-1, v);
    rec(root, mid+1, j, v);
 }
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head==NULL) return NULL;
        ListNode *temp = head;
        vector <int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        if(n==0) return NULL;
        TreeNode *root = NULL;
        rec(root, 0, n-1, v);
        return root;
    }
};