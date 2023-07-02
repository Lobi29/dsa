#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
{
    int totalSteps = (m + n - 2);
    int totalRightSteps = (m - 1);

    int res = 1;

    for (int i = 1; i <= totalRightSteps; i++) {
        res = res * (totalSteps - totalRightSteps + i) / i;
    }
    
    return res;
}

int main()
{
    return 0;
}