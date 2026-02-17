1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4       unordered_map<int, int> mp;
5
6       for(int i =0; i<nums.size(); i++){
7        if(mp.find(nums[i]) != mp.end() && i - mp[nums[i]] <=k){
8            return true;
9        }
10        mp[nums[i]]=i;
11       }
12       return false; 
13    }
14};
15//TC: 0(n) traverse the array 
16//SC: 0(n) stores all elements in map