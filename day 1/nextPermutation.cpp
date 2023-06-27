#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();

    // finding the break point
    int index = -1;
    int ref = nums[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < ref)
        {
            index = i;
            break;
        }
    }

    // if no break point exist
    if (index == -1)
    {
        int start = 0;
        int end = n - 1;
        while (start <= end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;

            start++;
            end--;
        }
    }
    else
    {
        // finding smallest number which is just greater than arr[i]
        for (int k = n - 1; k > index; k--)
        {
            if (nums[k] >= ref)
            {
                int temp = nums[k];
                nums[k] = nums[index];
                nums[index] = temp;
                break;
            }
        }

        // reversing the right side
        int start = index + 1;
        int end = n - 1;
        while (start <= end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;

            start++;
            end--;
        }
    }
}

int main()
{
    vector<int> nums = {4, 3, 2, 1};

    nextPermutation(nums);

    return 0;
}