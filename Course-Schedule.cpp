1class Solution {
2public:
3    bool dfs(int node, vector<vector<int>>& adj,vector<int>& vis, vector<int>& path){
4        vis[node]=1;
5        path[node]=1;
6
7        for(auto it: adj[node]){
8            if(!vis[it]){
9                if(dfs(it, adj, vis, path))
10                 return true;
11            }else if(path[it]){
12                return true;
13            }
14        }
15        path[node]=0;
16        return false;
17    }
18    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
19      vector<vector<int>> adj(numCourses);
20
21      for(auto &e: prerequisites){
22        adj[e[1]].push_back(e[0]);
23      }
24
25       vector<int> vis(numCourses, 0);
26       vector<int> path(numCourses, 0);
27
28       for(int i =0; i<numCourses; i++){
29        if(!vis[i]){
30            if(dfs(i, adj, vis, path))
31             return false;
32        }
33       }
34       return true;
35    }
36};
37//TC; 0(V + E) all vertex and adjacent nodes are traversed
38//SC: 0(V + E) all adjacency list and stack