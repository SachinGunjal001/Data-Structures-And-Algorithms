#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout<<"\nInput the number of rows: ";
    cin >> m;
    cout<<"\nInput the number of columns: ";
    cin >> n;
    int arr[m][n];
    //Taking input in matrix
    int i = 0, j = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j ++)
        {
            cin>> arr[i][j];
        }
    }
    cout<<"\nThe matrix is: "<<endl;
    // printing a matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<"\n Spiral of a matrix: "<<endl;

    int k = 0, l = 0;
    while(k < m && l < n)
    {
        for(i = l; i < n; i++)
        {
            cout << arr[k][i] << " ";
        }
        k++;
        for(i = k; i < m; i++)
        {
            cout << arr[i][n-1] << " ";
        }
        n--;
        if(k < m)
        {
            for(i = n - 1; i >= 0; --i)
            {
                cout << arr[m-1][i] << " ";
            }
            m--;
        }
        if(l < n)
        {
            for(i = m - 1; i >= k; i--)
            {
                cout << arr[i][l] << " ";
            }
            l++;
        }
    }
    cout << endl;
    return 0;
}






