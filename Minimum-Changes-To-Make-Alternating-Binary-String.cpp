1class Solution {
2public:
3    int minOperations(string s) {
4       int  ze= 0;
5       
6
7       for(int i =0; i<s.size(); i++){
8        if(i%2==0){
9            if(s[i]=='0')  ze++;
10        }else{
11            if(s[i]=='1') ze++;
12        }
13       }
14       return min(ze, (int) s.size()-ze);
15    }
16};
17//Tc: 0(n) traverse all elemnets
18//SC: 0(1) due to variables ze and one