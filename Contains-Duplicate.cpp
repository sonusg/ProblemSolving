1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4    unordered_set<int> seen;
5    for(int num: nums){
6        if(seen.count(num)>0)
7        return true;
8
9        seen.insert(num);
10    }
11return false;
12    }
13};