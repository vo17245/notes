#include<P496.hpp>

class P496Test{
    public:
    Solution s;
    void test(){
        int n1[]={4,1,2};
        vector<int> nums1(n1,n1+3);
        int n2[]={1,3,4,2};
        vector<int> nums2(n2,n2+4);
        vector<int> ans=s.nextGreaterElement(nums1,nums2);
        for(auto iter=ans.begin();iter!=ans.end();iter++){
            cout<<*iter<<" "<<endl;
        }
    }
};