#include"P91.h"
class P91Test {
public:
	p91::Solution s;
	void test() {
		vector<vector<int>> costs;
		vector<int> cost1;
		cost1.emplace_back(5);
		cost1.emplace_back(8);
		cost1.emplace_back(6);
		vector<int> cost2;
		cost2.emplace_back(19);
		cost2.emplace_back(14);
		cost2.emplace_back(13);
		vector<int> cost3;
		cost3.emplace_back(7);
		cost3.emplace_back(5);
		cost3.emplace_back(12);
		vector<int> cost4;
		cost4.emplace_back(14);
		cost4.emplace_back(15);
		cost4.emplace_back(17);
		vector<int> cost5;
		cost5.emplace_back(3);
		cost5.emplace_back(20);
		cost5.emplace_back(10);
		costs.emplace_back(cost1);
		costs.emplace_back(cost2);
		costs.emplace_back(cost3);
		costs.emplace_back(cost4);
		costs.emplace_back(cost5);
		int res = s.minCost(costs);
		cout << res << endl;
	}
};
