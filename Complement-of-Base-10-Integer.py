1class Solution:
2    def bitwiseComplement(self, n: int) -> int:
3        if ( n == 0):
4             return 1
5        
6        mask = 1
7
8        while(mask <= n):
9            mask = mask << 1
10        mask -= 1
11
12        return n^mask    
13 #TC: 0(logn) since it move towards right computatin decrease in logarithmic time
14 #SC: 0(1) due to variables       