#include<lib.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxArea=0;
        int area;
        while(left<right){
            area=(right-left)*(height[left]<height[right]?left:right);
            if(area>maxArea){
                maxArea=area;
            }
            if(height[left]>height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxArea;
    }
};