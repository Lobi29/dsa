#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     int n = nums.size();
//     long long target = 0;
//     set<vector<int>> st;

//     for (int i = 0; i < n; i++) {
//         set<long long> hashset;
//         for (int j = i + 1; j < n; j++) {
//             long long sum = nums[i];
//             sum += nums[j];

//             long long third = target - sum;

//             if (hashset.find(third) != hashset.end()) {
//                 vector<int> temp = {nums[i], nums[j], int(third)};
//                 sort(temp.begin(), temp.end());

//                 st.insert(temp);
//             }
//             hashset.insert(nums[j]);
//         }
//     }

//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// optimise 

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    long long target = 0;
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            long long sum = nums[i];
            sum += nums[left];
            sum += nums[right];

            if (sum == target) {
                vector<int> temp = {nums[i], nums[left], nums[right]};
                ans.push_back(temp);
                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1]) {
                    left++;
                }


                while (right < right && nums[right] == nums[right + 1]) {
                    right--;
                }
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        }
    }

    return ans;
}
