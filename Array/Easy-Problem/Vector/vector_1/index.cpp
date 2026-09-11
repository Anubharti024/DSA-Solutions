#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // create 2D vector :
    vector<vector<int>>matrix(3, vector<int>(4,1));
   
    // print 
    // for(int i =0; i<3; i++){
    //     for(int j =0; j < 4; j++){
    //         cout << matrix[i][j] <<" ";
    //     }
    // }


    // find the row and col size in matrix in 2D array:
    cout<<"Row : "<< matrix.size()<<endl;
    cout<<"Col : "<< matrix[0].size()<<endl;

}