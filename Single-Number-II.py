1class Solution:
2    def singleNumber(self, nums: List[int]) -> int:
3        one = 0
4        two = 0
5
6        for num in nums:
7            one = ( one ^ num ) & ~two
8            two = ( two ^ num ) & ~one
9        return one    
10#TC: 0(n) traverse all elemnts in array
11#sc: 0(n) since it use variables such as one and two        
12