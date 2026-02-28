1class Solution {
2public:
3    void solve(vector<vector<char>>& board) {
4        int rows = board.size();
5        int cols = board[0].size();
6
7        for(int i=0; i<rows; i++){
8            if(board[i][0]=='O') dfs(board, i, 0);
9            if(board[i][cols-1]=='O') dfs(board, i, cols-1);
10        }
11
12        for(int j =0; j<cols; j++){
13            if(board[0][j]=='O') dfs(board, 0, j);
14            if(board[rows-1][j]=='O') dfs(board, rows-1, j);
15        }
16
17        for(int i=0; i<rows; i++){
18            for(int j =0; j<cols; j++){
19                if(board[i][j]=='#'){
20                    board[i][j]='O';
21                }else if(board[i][j]=='O'){
22                    board[i][j]='X';
23                }
24            }
25        }
26    }
27
28    void dfs(vector<vector<char>>& board, int i, int j){
29        if(i<0 || j<0 || i>=board.size()|| j>=board[0].size()|| board[i][j]!='O'){
30            return;
31        }
32
33        board[i][j]='#';
34        dfs(board, i+1, j);
35        dfs(board, i-1, j);
36        dfs(board, i, j+1);
37        dfs(board, i, j-1);
38    }
39};
40//tc: o(m*n) due to rows and cols
41//Sc: o(m*n) due to recursion stack
42