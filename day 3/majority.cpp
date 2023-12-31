#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int ansIndex = 0;
    int count = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[ansIndex]) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            ansIndex = i;
            count = 1;
        }
    }

    return ansIndex;
}

int main()
{
    return 0;
}