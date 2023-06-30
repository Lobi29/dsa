#include <bits/stdc++.h>
using namespace std;

// int subarraySum(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     int count = 0; 

//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; i < n; i++) {
//             sum += nums[j];

//             if (sum == k) {
//                 count++;
//             }
//         }
//     }

//     return count;
// }


// optimise solution
int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();    
    unordered_map<int, int> mpp;

    int currSum = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) 
    {
        currSum += nums[i];

        if (currSum == k) {
            count++;
        }

        if (mpp.find(currSum - k) != mpp.end()) {
            count += mpp[currSum - k];
        }

        mpp[currSum]++;
    }

    return count;

}

int main()
{
    return 0;
}