//https://leetcode.com/problems/container-with-most-water/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int width;
        int hit;
        int area;
        int max_area=0;
       int  n=height.size();
            int left=0;
            int right=n-1;
            while(left<right){
                width=abs(right-left);
                hit=min(height[left],height[right]);
                area=width*hit;
                if(area>max_area){
                    max_area=area;
                }
                if(height[left]<height[right]){
                    left++;
                }
                else{
                    right--;
                }
            }
        return max_area;
    }
};
