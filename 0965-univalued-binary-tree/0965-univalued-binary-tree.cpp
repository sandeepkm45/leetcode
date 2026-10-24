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
 bool funcn(TreeNode* root, int no){
    if (root==NULL) return true;
    if (root->val!=no) return false;
    bool left = funcn(root->left, no);
    bool right = funcn(root->right, no);
    return (left&&right);
 }
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (root==NULL) return true;
        return funcn(root, root->val);
    }
};