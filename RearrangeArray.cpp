#include<iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    // increase the value by (arr[arr[i]]%n)*n
    for(int i = 0; i < n; i++)
    arr[i] = arr[i] + (arr[arr[i]]%n)*n;

    //divide values by n

        for(int i = 0; i < n; i++)

            arr[i] = arr[i]/n;
}

// a utility function to print an array size of n

void printArr(int arr[], int n)
{
    for(int  i = 0; i < n; i++)
    {
        cout<<arr[i] << " ";

    }
}

int main()
{
    int arr[] = {3, 2, 0, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout<<"Given array is: ";
    printArr(arr, n);
    rearrange(arr, n);
    cout<<endl;
    cout<<"Modified array is: ";
    printArr(arr, n);
    return 0;
}

