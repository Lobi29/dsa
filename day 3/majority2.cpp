#include <bits/stdc++.h>
using namespace std;

// Using map
// vector<int> majorityElement(vector<int> &nums)
// {
//     map<int, int> mpp;

//     int mini = nums.size() / 3;

//     vector<int> ls;

//     // storing values with it's occurence
//     for (int i = 0; i < nums.size(); i++) {
//         mpp[nums[i]]++;

//         if (mpp[nums[i]] == mini) {
//             ls.push_back(nums[i]);
//         }

//         if (ls.size() == 2) {
//             break;
//         }
//     }

//     return ls;
// }

// Optimal Approach (Extended Boyer Moore’s Voting Algorithm): 
vector<int> majorityElement(vector<int> &nums)
{
    int count1 = 0;
    int count2 = 0;

    int element1 = INT_MIN;
    int ansIndex1 = -1;
    int element2 = INT_MIN;
    int ansIndex2 = -1;

    for (int i = 0; i < nums.size(); i++) {
        if (count1 == 0 && nums[i] != element2) {
            element1 = nums[i];
            ansIndex1 = i;
            count1++;
        } else if (count2 == 0 && nums[i] != element1) {
            element2 = nums[i];
            ansIndex2 = i;
            count2++;
        } else if (nums[i] == element1) {
            count1++;
        } else if (nums[i] == element2) {
            count2++;
        }
    }

    int mini = nums.size() / 3;

    vector<int> ans;

    if (count1 >= mini) {
        ans.push_back(element1);
    }

    if (count2 >= mini) {
        ans.push_back(element2);
    }

    return ans;

}

int main()
{
    return 0;
}