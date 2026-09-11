#include <iostream>
using namespace std;

int main()
{
    int row = 3, col = 4;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int reverse = 0;

    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    // Print matrix:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}