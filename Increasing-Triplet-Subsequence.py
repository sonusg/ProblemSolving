1class Solution:
2    def increasingTriplet(self, nums: List[int]) -> bool:
3
4        first = float('inf')
5        second = float('inf')
6
7        for num in nums:
8            if num <= first:
9                first = num
10            elif num <= second:
11                second = num
12            else:
13                return True 
14        return False
15#TC: 0(n) traverse all elemnts in array
16#Sc: 0(1) due to variable first and second
17