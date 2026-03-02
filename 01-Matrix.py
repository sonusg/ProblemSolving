1class Solution:
2    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
3        row, col = len(mat), len(mat[0])
4        result = [[float('inf')]* col for _ in range(row)]
5
6        for r in range(row):
7            for c in range(col):
8                if mat[r][c]==0:
9                    result[r][c]=0
10
11                else:
12                    if r > 0:
13                        result[r][c] = min(result[r][c] , result[r-1][c]+1)
14                    if c > 0:
15                        result[r][c] = min(result[r][c] , result[r][c-1]+1)        
16
17        for r in range(row-1, -1, -1):
18            for c in range(col-1, -1, -1):
19                if(mat[r][c] != 0):
20                    if r < row-1:
21                        result[r][c] = min(result[r][c] , result[r+1][c]+1)    
22                    if c < col-1:
23                        result[r][c] = min(result[r][c] , result[r][c+1]+1)  
24        return result  
25#TC: O(m*n) traverse all array
26#SC: 0(n) stores m rows and n cols values