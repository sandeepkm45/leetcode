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
 void build(TreeNode* root, vector <TreeNode*> &v){
    if (root==NULL) return;
    v.push_back(root);
    build(root->left, v);
    build(root->right, v);
 }
class Solution {
public:
    void flatten(TreeNode* root) {
        if (root==NULL) return;
        vector <TreeNode*> v;
        build(root, v);
        for (int i=0; i<v.size()-1; i++){
            v[i]->left = NULL;
            v[i]->right = v[i+1];
        }
        v[v.size()-1]->right = NULL;
        v[v.size()-1]->left = NULL;
        root = v[0];
    }
};