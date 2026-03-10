1class Solution:
2    def singleNumber(self, nums: List[int]) -> List[int]:
3        xor = 0
4        for num in nums:
5            xor ^= num
6
7        diff = xor & -xor
8
9        result=[0, 0]
10
11        for num in nums:
12            if (num & diff)==0:
13                result[0]^= num
14            else:
15                result[1]^= num
16        return result    
17        
18#TC: 0(n) we make single pass through all elements in xor operations
19#SC: 0(1) due to variables        