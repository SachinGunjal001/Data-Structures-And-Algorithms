#include<iostream>
using namespace std;

int RotateArray(int arr[], int n)
{
    int x = arr[n - 1];
    for(int i = n-1; i > 0; i--)

        arr[i] = arr[i - 1];
        arr[0] = x;

}

int main()
{
    int arr[] = {1,2,3,4,5}, i;
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout<<"Original Array is: ";
    for( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    RotateArray(arr,n);
    cout<<endl;
    cout<<"Rotated Array is: ";
    for(i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
