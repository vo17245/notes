#pragma once
#include<vector>
using namespace std;
namespace p77 {
    class Solution {
    public:
        void backtracking(int k, vector<vector<int>>& res, int start, int n, vector<int> path) {
            if (path.size() == k) {
                res.emplace_back(path);
                return;
            }
            if (start == n + 1) {
                return;
            }
            for (int i = start; i <= n; ++i) {
                if (n - i + path.size() + 1 < k) {
                    break;
                }
                path.emplace_back(i);
                backtracking(k, res, i + 1, n, path);
                path.pop_back();
            }
            return;
        }
        vector<vector<int>> combine(int n, int k) {
            vector<vector<int>> res;
            res.reserve(100);
            vector<int> path;
            backtracking(k, res, 1, n, path);
            return res;
        }
    };
}
