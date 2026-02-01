1class Solution(object):
2    def isPalindrome(self, x):
3        if x < 0:
4            return False
5
6        reverse = 0
7        xcopy = x
8
9        while x > 0:
10            reverse = (reverse * 10) + (x % 10)
11            x //= 10
12        
13        return reverse == xcopy
14        