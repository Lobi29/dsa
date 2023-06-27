// BRUTE FORCE APPROACH

// #include <bits/stdc++.h>
// using namespace std;

// int maxProfit(vector<int> &prices)
// {
//     int profit = 0;

//     for (int i = 0; i < prices.size() - 1; i++) {
//         for (int j = i + 1; j < prices.size(); j++) {
//             int ref = prices[j] - prices[i];

//             if (profit < ref) {
//                 profit = ref;
//             }
//         }
//     }

//     if (profit == 0) {
//         return -1;
//     }

//     return profit;
// }

// int main()
// {
//     vector<int> prices = {1, 2, 3, 4};

//     cout << maxProfit(prices);
    
//     return 0;
// }



// Intuition: We will linearly travel the array. We can maintain a minimum from the start of the array and compare it with every element of the array, if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] >= minPrice) {
            int ref = prices[i] - minPrice;
            if (ref > profit) {
                profit = ref;
            }
        } else {
            minPrice = prices[i];
        }
    }

    if (profit == 0) {
        return 0;
    }

    return profit;
}

int main()
{
    vector<int> prices = {1, 2, 3, 4};

    cout << maxProfit(prices);
    
    return 0;
}