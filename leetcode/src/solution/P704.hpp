#pragma once
#include"lib.h"
namespace p704 {
    class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int start = 0;
            int end = n;
            int p;
            while (end > start && start >= 0 && end <= n) {
                p = start + (end - start) / 2;
                if (nums[p] > target) {
                    end = p;
                }
                else if (nums[p] < target) {
                    start = p + 1;
                }
                else {
                    return p;
                }
            }
            return -1;
        }
    };
}