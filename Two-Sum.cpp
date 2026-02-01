1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        
5        int n= nums.size();
6
7        for(int i=0; i<n; i++){
8           for(int j=i+1; j<n; j++){
9            if(nums[i]+nums[j]==target)
10            {
11                return{i,j};
12            }
13           }
14        }
15        return{};
16    }
17};