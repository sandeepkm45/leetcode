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
 void funcn(TreeNode*root, vector <int> &v){
    if (root == NULL) return;
    funcn(root->left, v);
    v.push_back(root->val);
    funcn(root->right, v);
 }
 void helper(TreeNode* &root, vector <int> v){
    if(root==NULL) return;
    int i=0; 
    while(i<v.size()){
        if (v[i]==root->val) break;
        else i++;
    }
    int sum = 0;
    for(int j=i; j<v.size(); j++){
        sum = sum +v[j];
    }
    root->val = sum;
    helper(root->left, v);
    helper(root->right, v);
 }
class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        vector <int> v;
        funcn(root, v);
        helper(root, v);
        return root;
    }
};