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
 int sum(TreeNode *root){
    if (root==NULL) return 0;
    int left = sum(root->left);
    int right = sum(root->right);
    return left+right+root->val;
 }

class Solution {
public:
    int findTilt(TreeNode* root) {
    if (root==NULL) return 0;
    int x = sum(root->left);
    int y = sum(root->right);
    int ans = abs(x-y);
    ans = ans + findTilt(root->left);
    ans = ans + findTilt(root->right);
    return ans;
    }
};