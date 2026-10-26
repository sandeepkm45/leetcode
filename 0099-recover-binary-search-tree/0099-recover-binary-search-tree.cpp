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
 void ret(TreeNode *root, vector <TreeNode *> &v){
    if (root==NULL) return ;
    ret(root->left, v);
    v.push_back(root);
    ret(root->right, v);
 }
class Solution {
public:
    void recoverTree(TreeNode* root) {
        vector <TreeNode *> v;
        ret(root, v);

        for (int i=0; i<v.size(); i++){
            for (int j=i+1; j<v.size(); j++){
                if (v[i]->val>v[j]->val){
                    swap(v[i]->val, v[j]->val);
                }
            }
        }
    }
};