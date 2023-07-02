#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size() - 1;
    int col = matrix[0].size() - 1;

    int i = 0, j = col;

    while ((i >= 0 and i <= row) and (j >= 0 and j <= col))
    {
        // when our pointer is on left column
        if (j == 0 and i != row)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] < target)
            {
                i++;
            }
            else if (matrix[i][j] > target)
            {
                return false;
            }
            // when our pointer is on bottom row
        }
        else if (i == row and j != 0)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] > target)
            {
                j--;
            }
            else if (matrix[i][j] < target)
            {
                return false;
            }
            // bottom left corner
        }
        else if (i == row and j == 0)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
    return false;
}