//https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=0;
        int right=0;
        vector<int>res;
        while(left<m&&right<n){
            if(nums1[left]<nums2[right]){
             res.push_back(nums1[left]);
             left++;
            }
            else if(nums1[left]==nums2[right]){
                res.push_back(nums1[left]);
                 res.push_back(nums2[right]);
                 left++;
                 right++;
            }
            else{
                res.push_back(nums2[right]);
                right++;
            }
        }
        while(left<m){
            res.push_back(nums1[left]);
            left++;
        }
         while(right<n){
            res.push_back(nums2[right]);
            right++;
        }
        for(int i=0;i<res.size();i++){
            nums1[i]=res[i];

        }
    }
};
