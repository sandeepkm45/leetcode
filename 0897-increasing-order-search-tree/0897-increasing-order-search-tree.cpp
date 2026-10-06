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
    if (root==NULL) return new TreeNode(val);
    if(val>root->val){
        root->right = insert(root->right, val);
    }
    if(val<root->val){
        root->left = insert(root->left, val);
    }
    return root;
 }
 void funcn(TreeNode* root, vector <int> &v){
    if(root==NULL) return;
    funcn(root->left, v);
    v.push_back(root->val);
    funcn(root->right, v);
 }
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector <int> v;
        funcn(root, v);
        TreeNode *ret = NULL;
        for (int i=0; i<v.size(); i++){
            ret = insert(ret, v[i]);
        }
        return ret;
    }
};