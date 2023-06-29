#include <bits/stdc++.h>
using namespace std;

// using un_ordered map
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++) {
        mpp[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (mpp.find(complement) != mpp.end() and mpp[complement] != i) {
            return {i, mpp[complement]};
        }
    }
    return {};
}


// optimize way
vector<int> twoSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[right] + nums[left];
        if (sum == target) {
            return { left, right };
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
    }
    return {};
}