1class Solution:
2    def zeroFilledSubarray(self, nums: List[int]) -> int:
3        result = 0
4        zecount = 0
5
6        for num in nums:
7            if num == 0:
8                zecount += 1
9            else:
10                result += zecount * (zecount + 1)//2
11                zecount = 0
12        result += zecount * (zecount + 1)//2           
13        return result
14        #TC: 0(n) traverse all elemnts in array
15        #SC: 0(1) since variables are used to point each index