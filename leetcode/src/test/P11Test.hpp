#include<P11.hpp>
class P11Test{
    public:
    Solution s;
    void test(){
        int a[]={1,8,6,2,5,4,8,3,7};
        vector<int> height(a,a+9);

        s.maxArea(height);
    }
};