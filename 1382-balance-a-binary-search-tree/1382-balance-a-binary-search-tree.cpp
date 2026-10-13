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
    if(root==NULL) return 0;
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right)+1;
 }
 int balance(TreeNode *root){
    if (root==NULL) return 0;
    return height(root->left)-height(root->right);
 }

 TreeNode *rr(TreeNode* x){
    TreeNode *y = x->left;
    TreeNode *T = y->right;

    y->right = x;
    x->left = T;
    return y;
 }

 TreeNode *ll(TreeNode* y){
    TreeNode *x = y->right;
    TreeNode *T = x->left;

    x->left = y;
    y->right = T;
    return x;
 }
 TreeNode* insert(TreeNode* root, int val){
    if (root==NULL) return new TreeNode(val);
    else if (val > root->val){
        root->right = insert(root->right, val);
    }
    else if (val < root->val){
        root->left = insert(root->left, val);
    }
    else return root;
    int bal = balance(root);
    if(bal>1 && val<root->left->val){
        return rr(root);
    }
    if(bal<-1 && val>root->right->val){
        return ll(root);
    }
    if(bal>1 && val>root->left->val){
        root->left = ll(root->left);
        return rr(root);
    }
    if(bal<-1 && val<root->right->val){
        root->right = rr(root->right);
        return ll(root);
    }
    return root;
 }

 void funcn(TreeNode* root, vector <int> &v){
    if (root==NULL) return ;
    funcn(root->left, v);
    v.push_back(root->val);
    funcn(root->right, v);
 }
class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector <int> v;
        funcn(root, v);
        TreeNode *node = NULL;
        for (int i=0; i<v.size(); i++){
            node = insert(node, v[i]);
        }
        return node;
    }
};