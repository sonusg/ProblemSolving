1class Solution {
2public:
3    int maxtime = 0;
4    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
5        vector<vector<int>> subordinates(n);
6        for(int i =0; i<n; i++){
7            if(manager[i] != -1){
8                subordinates[manager[i]].push_back(i);
9            }
10        }
11        dfs(headID, 0, subordinates, informTime);
12        return maxtime;
13    }
14
15    void dfs(int cuid, int cutime, vector<vector<int>>& subordinates, vector<int>& informTime){
16       maxtime = max(maxtime, cutime);
17
18       for(int sub: subordinates[cuid]){
19        dfs(sub, cutime + informTime[cuid], subordinates, informTime);
20       }
21    }
22};
23//Tc: 0(n) since each employee is visted once
24//Sc: 0(n) due to recursion stack