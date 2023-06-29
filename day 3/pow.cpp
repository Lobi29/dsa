#include <bits/stdc++.h>
using namespace std;

// double myPow(double x, int n)
// {
//     double ans = 1;
//     if (n == 0) {
//         return 1;
//     } else if (n > 0) {
//         for (int i = 0; i < n; i++) {
//             ans *= x;
//         }
//     } else if (n < 0) {
//         n = 0 - n;
//         for (int i = 0; i < n; i++) {
//             ans = (1 / x);
//         }
//     }

//     return ans;
// }

// O(logn)
double myPow(double x, int n)
{
    long long ref = n;
    double ans = 1.0;

    if (n < 0) {
        ref = -1*n;
    }

    while (ref > 0) {
        if (ref % 2) {
            ans *= x;
            ref = ref - 1;
        } else {
            x = x*x;
            ref = ref / 2;
        }
    }

    if (n < 0) {
        ans = double(1.0) / double(ans);
    }

    return ans;
}


int main()
{
    return 0;
}