1class Solution {
2    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& reachable, int r, int c){
3        int nrows = heights.size();
4        int ncols = heights[0].size();
5        vector<pair<int, int>> dirs{{0, 1}, {0,-1}, {1, 0}, {-1, 0}};
6
7        reachable[r][c]="true";
8
9        for(const auto& dir: dirs){
10            int nrow = r+dir.first, ncol = c+dir.second;
11
12            if(nrow<0 || nrow>=nrows || ncol<0 || ncol>=ncols) continue;
13            if(reachable[nrow][ncol]) continue;
14            if(heights[nrow][ncol] < heights[r][c]) continue;
15
16            dfs(heights, reachable, nrow, ncol);
17        }
18
19    }
20public:
21    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
22        int nrows = heights.size();
23        int ncols = heights[0].size();
24
25        vector<vector<bool>> pacreac(nrows, vector<bool>(ncols, false));
26        vector<vector<bool>> altreac(nrows, vector<bool>(ncols, false));
27
28        for(int i =0; i<nrows; i++){
29            dfs(heights, pacreac, i, 0);
30            dfs(heights, altreac, i, ncols-1 );
31        }
32
33        for(int j=0; j<ncols; j++){
34            dfs(heights,pacreac, 0, j);
35            dfs(heights, altreac, nrows-1, j);
36        }
37
38        vector<vector<int>> result;
39        for(int i =0; i<nrows; i++){
40            for(int j =0; j<ncols; j++){
41                if(pacreac[i][j] &&  altreac[i][j]){
42                    result.push_back({i, j});
43                }
44            }
45        }
46        return result;
47    }
48};
49//Tc: 0(M*n) m and n are the rows and columns
50//Sc: 0(m*n) recursion stack due to dfs