1class Solution {
2public:
3    int longestBalanced(vector<int>& nums) {
4        int msum = 0;
5        for(int i =0; i<=nums.size(); i++){
6            unordered_set<int> even, odd;
7
8            for(int j =i; j<nums.size(); j++){
9                if(nums[j]%2==0){
10                    even.insert(nums[j]);
11                }else{
12                    odd.insert(nums[j]);
13                }if(even.size()==odd.size()){
14                msum = max(msum, j-i+1);
15                }
16            }
17        }
18        return msum;
19    }
20};
21//TC: 0(n^2) llop 2 times i and j
22//SC: 0(n) stores all elements in hashset