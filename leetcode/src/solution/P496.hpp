#include<lib.h>

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans(n1);
        vector<int> nge(n2);
        map<int,int> val_idx;
        for(int i=0;i<n2;i++){
            val_idx.insert({nums2[i],i});
        }
        nge[n2-1]=-1;
        for(int i=n2-2;i>=0;i--){
            int idx=i+1;
            while(true){
                //check if meets
                if(nums2[idx]>nums2[i]){
                    nge[i]=idx;
                    break;
                }
                //check if next exists
                if(nge[idx]==-1){
                    nge[i]=-1;
                    break;
                }
                //go to next
                idx=nge[idx];
            }
        }
        for(int i=0;i<n1;i++){
            auto iter=val_idx.find(nums1[i]);
            if(nge[iter->second]==-1){
                ans[i]=-1;
            }else{
                ans[i]=nums2[nge[iter->second]];
            }
            
        }
        return ans;
    }
};