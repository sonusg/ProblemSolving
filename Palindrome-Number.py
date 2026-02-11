1class Solution:
2    def isPalindrome(self, x: int) -> bool:
3         if(x < 0):
4            return False
5            
6         s = str(abs(x))
7         length = len(s)
8
9         for i in range(length//2):
10             if(s[i] != s[length-i-1]):
11               return False
12         return True      