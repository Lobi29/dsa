#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());

    for (int i = 1; i < intervals.size(); i++)
    {
        int prevX = intervals[i - 1][0];
        int prevY = intervals[i - 1][1];

        int presX = intervals[i][0];
        int presY = intervals[i][1];

        if (presX <= prevY && presY >= prevY)
        {
            intervals[i][0] = prevX;
            intervals.erase(intervals.begin() + (i - 1));
            i--;
        } else if (presY <= prevY) {
            intervals.erase(intervals.begin() + (i));
            i--;
        }
    }
    return intervals;
}