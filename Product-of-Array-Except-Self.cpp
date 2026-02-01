1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4    int n=nums.size();
5    vector<int> ans(n,1);
6    
7    
8//prefix
9    for(int i=1;i<n;i++){
10     ans[i]=ans[i-1]*nums[i-1];
11    }
12    int suffix=1;
13    for(int i=n-2; i>=0; i--){
14       suffix *= nums[i+1];
15       ans[i] *=suffix;
16    }
17    return ans;
18    }
19};
20