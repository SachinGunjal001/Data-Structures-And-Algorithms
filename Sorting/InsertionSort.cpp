#include<bits/stdc++.h>
using namespace std;


int InsertionSort( int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void PrintArray(int arr[], int siz)
{
    int i;
    for(i = 0; i < siz; i++)
    {
        cout<< arr[i]<< " ";
    }
}

int main()
{
    int arr[] = {3,6,1,45,23,78,21,12,9,34,65,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, n);
    cout<<"Sorted Array :";
    PrintArray(arr, n);
    return 0;
}
