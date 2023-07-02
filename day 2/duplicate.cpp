// finding the repeated element

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            return nums[i];
        }
    }
    return -1;
}

// Floyd's Cycle Detection
int findDuplicate(vector<int> &nums)
{
    int slow = 0;
    int fast = 0;

    while (true) {
        slow = nums[slow];
        fast = nums[nums[fast]];

        if (slow == fast) {
            break;
        }
    }

    int slow2 = 0;

    while (true)
    {
        slow = nums[slow];
        slow2 = nums[slow2];

        if (slow == slow2) {
            return slow;
        }
    }

    return -1;
    
}