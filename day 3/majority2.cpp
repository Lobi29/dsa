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
    int n = nums.size();

    int count1 = 0;
    int count2 = 0;
    int element1 = INT_MIN;
    int element2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (count1 == 0 && element2 != nums[i]) {
            count1 = 1;
            element1 = nums[i];
        } else if (count2 == 0 && element1 != nums[i]) {
            count2 = 1;
            element2 = nums[i];
        } else if (element1 == nums[i]) {
            count1++;
        } else if (element2 == nums[i]) {
            count2++;
        } else {
            count1--;
            count2--;
        }
    }

    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++) {
        if (element1 == nums[i]) {
            count1++;
        } 
        if (element2 == nums[i]) {
            count2++;
        }
    }

    int mini = int(n / 2) + 1;

    vector<int> ls;
    if (count1 >= mini) {
        ls.push_back(element1);
    } 
    if (count2 >= mini) {
        ls.push_back(element2);
    }

    return ls;

}

int main()
{
    return 0;
}