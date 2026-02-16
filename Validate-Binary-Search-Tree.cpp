1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool isValidBST(TreeNode* root) {
15        return isvalid(root,LONG_MIN,LONG_MAX);
16    }
17        bool isvalid(TreeNode* root,long minval,long maxval){
18        if(!root) return true;
19        if(root->val<=minval || root->val>=maxval) return false;
20        return isvalid(root->left,minval,root->val) &&
21               isvalid(root->right,root->val,maxval);
22               
23        
24    }
25};