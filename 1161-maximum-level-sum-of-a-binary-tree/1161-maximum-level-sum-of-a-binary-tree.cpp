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
 int height(TreeNode *root){
    if (root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right)+1;
 }
 void sum(TreeNode *root, int k, map <int, int> &m){
    if(root==NULL)return ;
    m[k]=m[k]+root->val;
    sum(root->left, k+1, m);
    sum(root->right, k+1, m);
 }
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int h = height(root);
        map <int, int> m;
        sum(root, 0, m);
        int max = INT_MIN;
        int ans;
        for(int i=0; i<h; i++) {
            if(m[i]>max) {
                max = m[i];
                ans = i+1;
            }
        }
        return ans;
    }
};