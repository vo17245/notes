#pragma once
#include"lib.h"
namespace p324 {
    class Solution {
    public:
        void backtracking(vector<int>& nums, int start, vector<int>& ans, vector<int> path) {
            if (path.size() == nums.size()) {
                int flag = 1;
                for (int i = 0; i < path.size() - 1; ++i) {
                    if (i % 2 == 0) {
                        path[i] > path[i + 1];
                        flag = 0;
                        break;
                    }
                    else {
                        path[i] < path[i + 1];
                        flag = 0;
                        break;
                    }

                }
                if (flag == 1) {
                    ans = move(path);
                }
                return;
            }
            for (int i = start; i < nums.size(); ++i) {
                path.emplace_back(nums[i]);
                backtracking(nums, start + 1, ans, path);
                path.pop_back();
            }
        }
        void wiggleSort(vector<int>& nums) {
            vector<int> ans;
            vector<int> path;
            backtracking(nums, 0, ans, path);
            nums = move(ans);
        }
    };
}