#pragma once
#include"lib.h"
namespace p91 {
    class Solution {
    public:

        int minCost(vector<vector<int>>& costs) {
            int n = costs.size();
            vector<vector<int>> minCost;
            minCost.resize(n);
            for (int i = 0; i < n; ++i) {
                minCost[i].resize(3);
            }
            minCost[0][0] = costs[0][0];
            minCost[0][1] = costs[0][1];
            minCost[0][2] = costs[0][2];

            for (int i = 1; i < n; ++i) {
                minCost[i][0] = costs[i][0] + min(minCost[i - 1][1], minCost[i - 1][2]);
                minCost[i][1] = costs[i][1] + min(minCost[i - 1][0], minCost[i - 1][2]);
                minCost[i][2] = costs[i][2] + min(minCost[i - 1][0], minCost[i - 1][1]);
            }
            int p = INT_MAX;
            p = min(minCost[n - 1][0], p);
            p = min(minCost[n - 1][1], p);
            p = min(minCost[n - 1][2], p);
            return p;
        }
    };
}