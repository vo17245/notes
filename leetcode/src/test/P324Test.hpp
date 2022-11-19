#pragma once
#include"P324.hpp"
class P324Test {
public:
	p324::Solution s;
	void test() {
		vector<int> arr;
		arr.emplace_back(1);
		arr.emplace_back(5);
		arr.emplace_back(1);
		arr.emplace_back(1);
		arr.emplace_back(6);
		arr.emplace_back(4);
		s.wiggleSort(arr);
		for (auto iter = arr.begin(); iter != arr.end(); iter++) {
			cout << *iter << " ";
		}
		cout << endl;
	}
};