
#include<bits/stdc++.h>
using namespace std;

 int Merge(int arr[], int lb, int ub, int mid)
 {
     int i = lb;
     int j = mid+1;
     int k = ub;
                  int b[k];

     while(i<=mid && j<=ub)
     {
         if(arr[i] <= arr[j])
         {
              b[k] = arr[i];
             i++;
           //  k++;
         }else{
         b[k] = arr[i];
         i++;
         //k++;
         }
         k++;
     }
     if(i > mid)
     {
         while(j <= ub)
         {
             b[k] = arr[j];
             j++;
             k++;
         }
     }else{
      while(i <= mid)
      {
          b[k] = arr[i];
          i++;
          k++;
      }
     }
     for(k = lb; k <=ub; k++)
     {
         arr[k] = b[k];
     }
 }

 int MergeSort(int arr[], int lb, int ub)
 { int mid;
     if(lb < ub)
     {
        mid = (lb+ub)/2;

     }
     MergeSort(arr, lb, mid);
     MergeSort(arr, mid+1, ub);
     Merge(arr, lb, ub, mid);
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


int arr[] = {3,6,1,45,23,78,21,12,9,34,65,32,3};
   int n = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    PrintArray(arr, n);
    return 0;
}
