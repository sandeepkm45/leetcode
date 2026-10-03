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
 void funcn(TreeNode *root, map <int, int> &m){
    if (root==NULL) return;
    funcn(root->left, m);
    m[root->val]++;
    funcn(root->right, m);
 }
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        map <int, int> m;
        funcn(root, m);
        int key; 
        int maxx = INT_MIN;
        for (auto i : m){
            if(i.second > maxx){
                maxx = i.second;
                key = i.first;
            }
        }
        vector <int> v;
        for (auto i : m){
            if(i.second == maxx){
                v.push_back(i.first);
            }
        }
        return v;
    }
};