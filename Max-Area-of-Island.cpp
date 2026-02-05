1class Solution {
2public:
3    int m ,n;
4    int dfs(vector<vector<int>>& grid, int i, int j){
5
6      if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0){
7            return 0;
8        }
9
10        grid[i][j]=0;
11
12        return 1 + dfs(grid, i+1, j)
13                 + dfs(grid, i, j+1)
14                 + dfs(grid, i-1, j)
15                 + dfs(grid, i, j-1);
16    }
17    int maxAreaOfIsland(vector<vector<int>>& grid) {
18      m = grid.size();
19      n = grid[0].size();
20      int maxarea = 0;
21
22      for(int i = 0; i<m; i++){
23        for(int j = 0; j<n; j++){
24            if(grid[i][j]==1){
25                maxarea = max(maxarea, dfs(grid, i, j));
26            }
27        }
28      }
29      return maxarea;  
30    }
31};
32
33//TC: 0(m*n)
34//SC: 0(m*n)