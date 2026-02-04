1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>> res(numRows);
5
6        for(int i =0; i<numRows; i++){
7            res[i].resize(i + 1);
8            res[i][0]=res[i][i]= 1;
9            for(int j = 1; j<i; j++){
10                res[i][j] = res[i-1][j-1] + res[i-1][j];
11            }
12        }
13        return res;
14    }
15};//Tc: 0(n 2)
16  //SC: 0(n 2)