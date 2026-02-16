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
14    int diameterOfBinaryTree(TreeNode* root) {
15        int diameter = 0;
16        height(root, diameter);
17        return diameter;
18    }
19
20     int height(TreeNode* root, int& diameter){
21        if(root == nullptr){
22            return 0;
23        }
24
25        int lh = height(root->left, diameter);
26        int rh = height(root->right, diameter);
27        diameter = max(diameter, lh + rh);
28        return 1 + max(lh , rh);
29    }
30};
31// TC: 0(n) visit n nodes
32// sc: 0(h) height of the tree using recursion stack