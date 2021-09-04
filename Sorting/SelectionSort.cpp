#include<bits/stdc++.h>
using namespace std;


int SelectionSort( int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min != i){
            swap(arr[i], arr[min]);
        }
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
    SelectionSort(arr, n);
    cout<<"Sorted Array :";
    PrintArray(arr, n);
    return 0;
}

