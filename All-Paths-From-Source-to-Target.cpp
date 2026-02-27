1class Solution {
2public:
3    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
4        vector<vector<int>> allpath;
5        vector<int> path;
6        path.push_back(0);
7        dfs(graph, 0, path, allpath);
8        return allpath;
9
10    }
11
12    void dfs(vector<vector<int>>& graph, int cnode, vector<int>&path, vector<vector<int>>& allpath){
13        if(cnode == graph.size()-1){
14            allpath.push_back(path);
15            return;
16        }
17
18        for(int near: graph[cnode]){
19            path.push_back(near);
20            dfs(graph, near, path, allpath);
21            path.pop_back();
22        }
23    }
24};
25//TC: 0(2^n*n)there can be 2n path and each path can be length n
26//SC: 0(n) recursion stack space