1class Solution {
2public:
3    int minOperations(string s) {
4       int  ze= 0;
5       int  one= 0;
6
7       for(int i =0; i<s.size(); i++){
8        if(i%2==0){
9            if(s[i]=='0') one++;
10            else ze++;
11        }else{
12            if(s[i]=='1') one++;
13            else ze++;
14        }
15       }
16       return min(ze, one);
17    }
18};
19//Tc: 0(n) traverse all elemnets
20//SC: 0(1) due to variables ze and one