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
 void lvlorder(TreeNode *root, vector <vector <int>> &vec){
    if (root==NULL) return;
    vector<int> v;
    queue <TreeNode *> q;
    int c=1;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode *curr = q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                q.push(NULL);
                vec.push_back(v);
                v.clear();
                c++;
                continue;
            }
            else {
                vec.push_back(v);
                break;
            }
        }
        if (c%2!=0){
            v.push_back(curr->val);
        }
        else{
            v.insert(v.begin()+0, curr->val);
        }
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector <int>> vec;
        lvlorder(root, vec);
        return vec;
    }
};