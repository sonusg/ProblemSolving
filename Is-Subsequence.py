1class Solution:
2    def isSubsequence(self, s: str, t: str) -> bool:
3        i, j= 0, 0
4
5        while i < len(s) and j < len(t):
6
7            if s[i]==t[j]:
8                i += 1
9
10            j += 1    
11
12        return i == len(s) 
13#TC: 0(n) due to traversal of all elemnets in array
14#SC: 0(1) due to use of variables           
15                