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
14    int widthOfBinaryTree(TreeNode* root) {
15        if(!root){
16            return 0;
17        }
18        long long ans = 0;
19
20        queue<pair<TreeNode*, long long>> q;
21        q.push({root, 0});
22        while(!q.empty()){
23            int size = q.size();
24            long long min = q.front().second;
25            long long first, last;
26
27            for(int i =0; i<size; i++){
28                long long cuid = q.front().second-min;
29                TreeNode* node = q.front().first;
30                q.pop();
31
32                if(i == 0) first = cuid;
33                if(i == size-1) last = cuid;
34                if(node->left){
35                    q.push({node->left, cuid*2+1}); 
36                }
37                if(node->right){
38                    q.push({node->right, cuid*2+2});
39                }
40            }ans = max(ans, last-first+1);
41        }return ans;
42    }
43};
44//TC: 0(n) each node is processed once
45//SC: 0(n) queue holds all the nodes