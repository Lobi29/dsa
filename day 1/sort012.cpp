// optimal Solution

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int numZero = 0;
    int numOne = 0;
    int numTwo = 0;

    // finding the frequency of 0, 1, 2
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            numZero++;
        } else if (nums[i] == 1) {
            numOne++;
        } else {
            numTwo++;
        }
    }

    // replacing the old array
    for (int i = 0; i < nums.size(); i++) {
        if (numZero > 0) {
            nums[i] = 0;
            numZero--;
            continue;
        }

        if (numOne > 0) {
            nums[i] = 1;
            numOne--;
            continue;
        }

        if (numTwo > 0) {
            nums[i] = 2;
            numTwo--;
            continue;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 0};

    sortColors(nums);

    return 0;
}