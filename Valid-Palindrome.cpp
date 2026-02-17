1class Solution {
2public:
3   void toLowerCase(string &s)
4{	
5    // Traverse through the string s
6    for (int i = 0; i < s.length(); i++)
7    {
8        char ch = s[i];
9        
10        // Check if ch is a uppercase letter
11        if (ch <= 'Z' && ch >= 'A')
12        {
13            ch = ch - ('A' - 'a');
14            s[i] = ch;
15        }
16    }
17}
18
19bool isPalindrome(string s)
20{	
21    // Convert uppercase letter into lowercase letter
22    toLowerCase(s);
23
24    int i = 0;
25    int j = s.length() - 1;
26
27    while (i < j)
28    {
29        if (isalnum(s[i]) == 0)
30        {
31            // ith pointer points to invalid character.
32            ++i;
33        }
34        else if (isalnum(s[j]) == 0)
35        {
36            // jth pointer points to invalid character.
37            --j;
38        }
39        else if (s[i] == s[j])
40        {
41            ++i, --j;
42        }
43        else
44        {
45            return false;
46        }
47    }
48    
49    return true;
50}
51};