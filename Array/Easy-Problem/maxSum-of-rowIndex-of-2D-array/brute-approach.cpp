#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = INT_MIN;
    int index = -1;

    for (int i = 0; i < 3; i++)
    {
        int total = 0;
        for (int j = 0; j < 3; j++)
        {
            total += arr[i][j];
        }

        if (sum < total)
        {
            sum = total;
            index = i;
        }
    }

    cout << "Row index is : " << index;

    return 0;
}