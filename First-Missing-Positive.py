1class Solution:
2    def firstMissingPositive(self, nums: List[int]) -> int:
3        n = len(nums)
4        seen = [False]*(n+1)
5
6        for num in nums:
7            if 0 < num <= n:
8                seen[num] = True
9
10        for i in range(1, n+1):
11            if not seen[i]:
12                return i
13        return n+1    
14                 