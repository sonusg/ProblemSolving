1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int l = 0;
5        int r = nums.size()-1;
6
7        while(l <= r){
8            int m = l+(r-l)/2;
9
10            if(nums[m]==target){
11                return m;
12            }else if(nums[m] > target){
13                r = m-1;
14            }else{
15                l = m+1;
16            }
17        }
18        return l;
19    }
20};
21//TC: 0(logn) binary search
22//SC: 0(1)