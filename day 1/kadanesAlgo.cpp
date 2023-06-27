#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxSum = INT_MIN;

    int start = 0;
    int ansStart = -1, ansEnd = -1;

    for (int i = 0; i < nums.size(); i++) {
        if (sum == 0) {
            start = i;
        }

        sum += nums[i];

        if (sum > maxSum) {
            maxSum = sum;

            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    cout << maxSubArray(nums);

    return 0;
}