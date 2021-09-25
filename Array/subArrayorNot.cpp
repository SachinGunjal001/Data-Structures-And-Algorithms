#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int arr2[],
              int m, int n)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }


        if (j == m)
            return 0;
    }


    return 1;
}


int main()
{
    int n;
    cout<<"enter array1 size: ";
    cin>>n;
    int arr1[n];
    cout<<"enter element in array1: ";
    for(int i =0; i < n; i++)
    {
        cin >>arr1[i];
    }
    int m;
    cout<<"enter array2 size: ";
    cin>>m;
    int arr2[m];
    cout<<"enter element in array2: ";
    for(int j =0; j < m; j++)
    {
        cin >>arr2[j];
    }
    if(isSubset(arr1, arr2, m, n))
        cout<<"Array2 is subset of array1 ";
    else
        cout<<"Array2 is subset of array1  ";
    getchar();
    return 0;
}
