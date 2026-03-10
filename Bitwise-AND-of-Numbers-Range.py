1class Solution:
2    def rangeBitwiseAnd(self, left: int, right: int) -> int:
3        shift = 0
4
5        while(left < right):
6            left >>= 1
7            right >>= 1
8            shift += 1
9        return left << shift   
10#TC: 0(logn) due to upper bound
11#SC: 0(1) due to constant variable 