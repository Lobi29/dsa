#include <bits/stdc++.h>
using namespace std;

bool isIdealPermutation(vector<int> &nums)
{
    int n = nums.size();

    int localCount = 0;
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            localCount++;
        }
    }

    cout << localCount << endl;

    int globalCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 2; j < n; j++) {
            // if (nums[i] > nums[j]) {
            //     globalCount++;
            // }
            cout << nums[i] << " and " << nums[j];
        }
    }

    cout << globalCount << endl;

    if (localCount == globalCount) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    vector<int> nums = {1, 0, 2};

    isIdealPermutation(nums);

    return 0;
}