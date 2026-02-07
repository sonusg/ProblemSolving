1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        int sum =0;
5        for(auto c: t) sum += c;
6        for(auto c: s) sum -= c;
7        return sum;
8    }
9};