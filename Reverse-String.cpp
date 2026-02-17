1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4       int l=0, r=s.size()-1;
5       while(l<r){
6        swap(s[l],s[r]);
7        l++;
8        r--;
9       } 
10    }
11};