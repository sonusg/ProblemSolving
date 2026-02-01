1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> hashmap;
5        int n= nums.size();
6
7        for(int i=0; i<n; i++){
8            int complement=target-nums[i];
9            if(hashmap.count(complement)){
10                return {hashmap[complement],i};
11            }
12            hashmap[nums[i]]=i;
13        }
14        return{};
15    }
16};
17           