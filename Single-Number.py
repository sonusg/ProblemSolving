1class Solution:
2    def singleNumber(self, nums: List[int]) -> int:
3        result = 0
4
5        for num in nums:
6            result ^= num
7        return result 
8#TC: 0(n) traverse all elements in array
9#SC: 0(1) due to variables           
10