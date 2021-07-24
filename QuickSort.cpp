#include<bits/stdc++.h>
using namespace std;

 int Partition(int arr[], int lb, int ub)
 {

     int pivot = arr[lb];
     int start = lb;
     int end1 = ub;

     while(start < end1)
     {
         while(arr[start] <= pivot)
         {
             start++;
         }
         while(arr[end1] > pivot)
         {
             end1--;
         }
         if(start < end1)
         {
             swap(arr[start], arr[end1]);
         }
     }
     swap(arr[lb], arr[end1]);
     return end1;
 }

 int QuickSort(int arr[], int lb, int ub)
 {
     if(lb < ub)
     {
         int quick = Partition(arr, lb, ub);
         QuickSort(arr, lb, quick - 1);
         QuickSort(arr, quick+1, ub);
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
    int n;
    int arr[n];
    cout<<" enter the element: ";
    for(int i = 0; i < n; ++i)
    {
        cin>>arr[n];
    }
//int arr[] = {3,6,1,45,23,78,21,12,9,34,65,32,3};
  //  int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    PrintArray(arr, n);
    return 0;
}
