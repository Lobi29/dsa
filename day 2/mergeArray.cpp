#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0;

    vector<int> vect;

    while (i < m and j < n)
    {
        if (nums1[i] == nums2[j])
        {
            vect.push_back(nums1[i]);
            vect.push_back(nums2[j]);
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j])
        {
            vect.push_back(nums2[j]);
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            vect.push_back(nums1[i]);
            i++;
        }
    }

    while (i < m)
    {
        vect.push_back(nums1[i]);
        i++;
    }

    while (j < n)
    {
        vect.push_back(nums2[j]);
        j++;
    }

    for (int k = 0; k < vect.size(); k++)
    {
        nums1[k] = vect[k];
    }
}