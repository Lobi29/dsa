#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int M = matrix.size();
    int N = matrix[0].size();

    vector<int> row(M, 0);
    vector<int> column(N, 0);

    // int row[M] = {0};
    // int column[N] = {0};

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (row[i] || column[j]) {
                matrix[i][j] = 0;
            }
        }
    }

}

int main()
{
}