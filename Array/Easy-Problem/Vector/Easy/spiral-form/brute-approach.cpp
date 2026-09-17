#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int row = 3;
    int col = 4;

    int top = 0;
    int bottom = row - 1;
    int left = 0;
    int right = col - 1;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        // 1. Top row
        for (int j = left; j <= right; j++)
        {
            ans.push_back(matrix[top][j]);
        }
        top++;

        // 2. Right column
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // 3. Bottom row
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // 4. Left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    // Print spiral order
    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}