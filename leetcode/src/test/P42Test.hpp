#include<P42.hpp>
class P42Test{
    public:
    Solution s;
    void test(){
        int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
        vector<int> arr(a,a+12);
        int ans=s.trap(arr);
        cout<<ans<<endl;
    }

};