#pragma once
#include"P39.h"
class P39Test {

private:
	p39::Solution s;
public:
	void test_my_qsort() {
		vector<int> arr;
		arr.push_back(2);
		arr.push_back(7);
		arr.push_back(6);
		arr.push_back(3);
		arr.push_back(5);
		arr.push_back(1);
		cout << "ori: ";
		for (int i = 0; i < arr.size(); ++i) {
			cout << arr[i] << " ";
		}
		cout << endl;
		s.my_qsort(arr,0,arr.size());
		cout << "res: ";
		for (int i = 0; i < arr.size(); ++i) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void test_combinationSum() {
		vector<int> arr;
		arr.push_back(2);
		arr.push_back(7);
		arr.push_back(6);
		arr.push_back(3);
		arr.push_back(5);
		arr.push_back(1);
		
		vector<vector<int>> res=s.combinationSum(arr, 9);
		for (int i = 0; i < res.size(); ++i) {
			cout << "[";
			int j = 0;
			for (; j < res[i].size()-1; ++j) {
				cout << res[i][j] << ",";
			}
			cout << res[i][j];
			cout << "]" << endl;
		}
	}
};