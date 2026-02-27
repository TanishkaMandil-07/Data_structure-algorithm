//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int cm=1;
        int officer=0;
        int n=nums.size();
        while(cm<n){
            if(nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            else{
                nums[officer+1]=nums[cm];
                officer++;
                cm++;
                k++;
            }
        }
        return k;
    }
};
