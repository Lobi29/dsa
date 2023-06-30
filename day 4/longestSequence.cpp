#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    set<int> hashset;
    for (int i = 0; i < n; i++)
    {
        hashset.insert(nums[i]);
    }

    int longestSequence = 0;
    for (int i = 0; i < n; i++)
    {
        if (!hashset.count(nums[i] - 1))
        {
            int number = nums[i];
            int countSequence = 1;

            while (hashset.count(number + 1))
            {
                countSequence++;
                number++;
            }
            longestSequence = max(longestSequence, countSequence);
        }
    }

    return longestSequence;
}