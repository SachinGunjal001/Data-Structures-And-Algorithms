#include<bits/stdc++.h>
using namespace std;

int findElementInMatrix(int matrix[3][3], int n, int x)
{
    if(n == 0)
        return -1;

    // traverse through the matrix
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)

            if(matrix[i][j] == x){
                cout<<"Element is found at: ("<<i<<","<<j<<")\n";
                return 1;
            }



     }
       cout<<"\n Element not found";
        return 0;
}

     int main()
     {
         int matrix[3][3] = {{16,24,30},
                             {15,25,35},
                             {27,29,26}};

         findElementInMatrix(matrix, 3, 24);
         return 0;

     }

