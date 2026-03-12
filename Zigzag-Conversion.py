1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if(numRows == 1 || numRows >= s.size()){
5            return s;
6        }
7
8        string res;
9        int len = s.size();
10
11        for(int r=0; r<numRows; r++){
12            int increment = 2*(numRows - 1);
13            for(int i=r; i<len; i+=increment){
14                res += s[i];
15                if(r>0 && r<numRows-1 && i+increment-2*r<len){
16                    res += s[i+increment-2*r];
17                }
18            }
19        }
20        return res;
21    }
22};