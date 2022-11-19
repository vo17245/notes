#include<lib.h>

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nle(n);
        nle[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            int idx=i+1;
            while(true){
                if(heights[idx]<heights[i]){
                    nle[i]=idx;
                    break;
                }
                if(nle[idx]==-1){
                    nle[i]=-1;
                    break;
                }
                idx=nle[idx];
            }
        }
        vector<int> lle(n);
        lle[0]=-1;
        for(int i=1;i<n;i++){
            int idx=i-1;
            while(true){
                if(heights[idx]<heights[i]){
                    lle[i]=idx;
                    break;
                }
                if(lle[idx]==-1){
                    lle[i]=-1;
                    break;
                }
                idx=lle[idx];
            }
        }
        int maxArea=0;
        for(int i=0;i<n;i++){
            int right;
            int left;
            if(nle[i]==-1){
                right=n;
            }else{
                right=nle[i];
            }
            if(lle[i]==-1){
                left=0;
            }else{
                left=lle[i]+1;
            }
            int area=(right-left)*heights[i];
            if(area>maxArea){
                maxArea=area;
            }
        }
        return maxArea;
    }
}; 