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
class Solution {
public:
vector <vector<int>> vec;
vector <int> v;
    vector<vector<int>> levelOrder(TreeNode* root) {
        vec.clear();
        v.clear();
        if (root == NULL) return vec;
        queue <TreeNode *> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode *curr = q.front();
            q.pop();
            if(curr==NULL){
                vec.push_back(v);
                v.clear();
                if(!q.empty()){
                    q.push(NULL);
                    continue;
                }
                else break;
            }
            v.push_back(curr->val);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        return vec;
    }
};