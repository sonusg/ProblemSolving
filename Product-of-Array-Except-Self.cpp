1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4    int n=nums.size();
5    vector<int> ans(n,1),prefix(n,1),suffix(n,1);
6    
7    
8//prefix
9    for(int i=1;i<n;i++){
10     prefix[i] = prefix[i-1] * nums[i-1];
11    }
12    
13    for(int i=n-2; i>=0; i--){
14     suffix[i] = suffix[i+1] * nums[i+1];
15    }
16    for(int i=0; i<n; i++){
17     ans[i]= prefix[i] * suffix[i];
18    }
19    
20    return ans;
21    }
22};
23