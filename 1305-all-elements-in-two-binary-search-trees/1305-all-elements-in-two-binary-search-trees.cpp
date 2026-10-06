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
 void funcn(TreeNode* root, vector <int> &v){
    if (root==NULL) return;
    funcn(root->left, v);
    v.push_back(root->val);
    funcn(root->right, v);
 }
class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> v;
        funcn(root1, v);
        funcn(root2, v);
        sort(v.begin(), v.end());
        return v;
    }
};