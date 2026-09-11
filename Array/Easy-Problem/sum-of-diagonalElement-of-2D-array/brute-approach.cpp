#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for dig 1 : 00 , 11, 22 :
    int firstDiagonal = 0;
    for (int i = 0; i < 3; i++)
    {
        firstDiagonal += arr[i][i]; // i --> 0 , j --> 0
    }

    // for diag 2 : 02 , 11 , 20 :

    int secondDiagonal = 0;
    int i = 0, j = 3 - 1; // row = 0 , col = 3 --> 3-1 = 2 --> j
    while (j >= 0)
    {
        secondDiagonal += arr[i][j];
        i++;
        j--;
    }

    cout << "Sum of First diagonal : " << firstDiagonal << endl;
    cout << "Sum of Second diagonal : " << secondDiagonal;
}