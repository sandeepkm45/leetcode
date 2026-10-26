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
 int left(TreeNode *root){
    if (root==NULL) return 0;
    TreeNode * temp = root;
    int c=0;
    while(temp!=NULL){
        temp = temp->left;
        c++;
    }
    return c;
 }
 int right(TreeNode *root){
    if (root==NULL) return 0;
    TreeNode * temp = root;
    int c=0;
    while(temp!=NULL){
        temp = temp->right;
        c++;
    }
    return c;
 }
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root==NULL) return 0;
        int l = left(root);
        int r = right(root);

        if (l==r){
            return pow(2,l)-1;
        } 
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};