1class Solution {
2public:
3    bool isValid(string str) {
4        stack<char> st;
5        for(int i=0; i<str.size(); i++){
6            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
7                st.push(str[i]);
8            }
9            else{
10                if(st.empty()){
11                    return false;
12                }
13
14                if((st.top()=='(' && str[i]==')') || 
15                   (st.top()=='{' && str[i]=='}') ||
16                   (st.top()=='[' && str[i]==']')){
17                    st.pop();
18                   }
19                   else{
20                    return false;
21                   }
22            }
23        }
24       return st.empty();
25    }
26};