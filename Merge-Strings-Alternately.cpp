1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4    string result ="";
5    int i =0;
6
7    while(i<word1.length() || i<word2.length()){
8        if(i < word1.length()){
9            result += word1[i];
10        }
11
12        if(i < word2.length()){
13            result += word2[i];
14        }
15        i++;
16    }
17   return result;
18    }
19};