1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        
5        int i=m-1;
6        int j=n-1;
7        int k=m+n-1;
8
9        while(j>=0){
10            if(i>=0 && nums1[i]>nums2[j])
11               nums1[k--]=nums1[i--];
12               
13            else nums1[k--]=nums2[j--];
14
15            }
16        }
17    
18};