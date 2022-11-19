#pragma once
#include"P704.hpp"
class P704Test {
public:
	p704::Solution s;
	void test() {
		int a[] = { -1,0,3,5,9,12 };
		vector<int> arr(a,a+6);
		int ans=s.search(arr, 9);
		cout << ans << endl;
	}
};