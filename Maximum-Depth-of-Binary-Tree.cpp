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
14    int maxDepth(TreeNode* root) {
15        queue<TreeNode*> q;
16
17        if(root != nullptr){
18            q.push(root);
19        }
20        int res=0;
21        while(!q.empty()){
22            int size = q.size();
23            for(int i=0; i<size; i++){
24               TreeNode* node = q.front();
25               q.pop(); 
26
27               if(node->left != nullptr){
28                q.push(node->left);
29               }
30
31               if(node->right != nullptr){
32                q.push(node->right);
33               }
34            }
35            res++;
36        }
37        return res;
38    }
39};