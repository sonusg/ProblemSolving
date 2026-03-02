1class Solution:
2    def orangesRotting(self, grid: List[List[int]]) -> int:
3        q = collections.deque()
4        fresh = 0
5        time = 0
6
7        for r in range(len(grid)):
8            for c in range (len(grid[0])):
9                if grid[r][c] == 2:
10                    q.append((r,c))
11                elif grid[r][c] == 1:
12                    fresh += 1
13
14        directions = [[0,1], [0, -1], [1,0], [-1,0]]
15        while fresh > 0 and q:
16            length = len(q)
17            for i in range(length):
18                r, c = q.popleft()
19                
20                for dr, dc in directions:
21                    row, col = r+dr, c+dc
22
23                    if (row in range(len(grid)) and col in range(len(grid[0])) and grid[row][col]==1):
24                        grid[row][col] = 2
25                        q.append((row, col))
26                        fresh -= 1
27            time += 1
28
29        return time if fresh == 0 else -1     
30
31#TC: 0(M*N)  number of rows and columns in grid
32#SC: 0(M*N)  queue where it traverse all the rows and columns        
33
34