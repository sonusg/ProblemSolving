1class Solution {
2public:
3    int minimumCost(vector<int>& nums) {
4        int min1 = 50;
5        int min2 = 50;
6
7        for(int i = 1; i<nums.size(); i++){
8            if(nums[i]<min1){
9                min2 = min1;
10                min1 = nums[i];
11            }else{
12                if(nums[i] < min2){
13                    min2 = nums[i];
14                }
15            }
16        }
17        return nums[0]+min1+min2;
18    }
19};
20//TC: 0(n) traverse all the array
21//SC: 0(1) min1 and min2