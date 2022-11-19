#include<P84.hpp>

class P84Test{
    public:
    Solution s;
    void test(){
        int a[]={2,1,2};
        
        vector<int> arr(a,a+3);
        int ans=s.largestRectangleArea(arr);
        cout<<ans<<endl;
    }
};