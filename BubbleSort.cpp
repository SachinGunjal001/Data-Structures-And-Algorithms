#include<bits/stdc++.h>
using namespace std;


int BubbleSort( int arr[], int n)
{
    int i, j;
    bool flag;
    for(i = 0; i < n-1; i++)
    {
        flag = 0;
        for(j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
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

    int arr[9];
    cout<<" enter the element: ";
    for(int i = 0; i < 9; ++i)
    {
        cin>>arr[i];
    }
  //  int arr[] = {3,6,1,45,23,78,21,12,9,34,65,32};
  //  int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, 9);
    cout<<"Sorted Array :";
    PrintArray(arr, 9 );
    return 0;
}
