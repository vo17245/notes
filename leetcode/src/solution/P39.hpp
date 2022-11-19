#pragma once
#include"lib.h"
namespace p39 {
    class Solution {
    public:
        void backtracking(vector<vector<int>>& res, vector<int>& arr, vector<int> path, int start, int target, int sum) {
            if (sum == target) {
                res.emplace_back(path);
                return;
            }
            if (sum > target) {
                return;
            }
            for (int i = start; i < arr.size(); ++i) {
                if ((arr[i] + sum) > target) {
                    break;
                }
                path.emplace_back(arr[i]);
                backtracking(res, arr, path, i, target, sum + arr[i]);
                path.pop_back();
            }
            return;
        }
        void my_qsort(vector<int>& arr, int start, int end) {
            if (end-start<2) {
                return;
            }
            int a = start + 1;
            int b = start + 1;
            int x;
            for (; b < end; ++b) {
                if (arr[b] < arr[start]) {
                    x = arr[b];
                    arr[b] = arr[a];
                    arr[a] = x;
                    ++a;
                }
            }
            x = arr[a - 1];
            arr[a - 1] = arr[start];
            arr[start] = x;
            my_qsort(arr, start, a - 1);
            my_qsort(arr, a, end);
        }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            my_qsort(candidates, 0, candidates.size());
            vector<vector<int>> res;
            res.reserve(150);
            vector<int> path;
            backtracking(res, candidates, path, 0, target, 0);
            return res;
        }
    };
}