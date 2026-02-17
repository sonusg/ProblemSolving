1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4    unordered_map<int,int> seen;
5    for(int num: nums){
6        if(seen[num]>=1)
7        return true;
8
9        seen[num]++;
10    }
11return false;
12    }
13};