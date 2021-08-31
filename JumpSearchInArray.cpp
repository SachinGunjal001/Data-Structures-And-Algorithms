#include<bits/stdc++.h>
using namespace std;

int JumpSearch(int arr[], int x, int n)
{
    // finding block size to be jumped
    int step = sqrt(n);

    // find the block where element is present
    int prev = 0;
    while(arr[step-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if(prev >= n)
            return -1;
    }

    // doing linear search for x  in block begg with prev
    while(arr[prev] < x)
    {
        prev++;

        if(prev == step )
            return -1;

    }
    // if element is found
    if(arr[prev] == x)
        return prev;

    return -1;
}

int main()
{
  int arr[] = {0, 1,2 ,4, 5, 7, 9,14, 17, 19, 38, 48, 67,99};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x;
   cout<<" enter the number  of which you want to find index: ";
   cin>>x;

   int index = JumpSearch(arr, x, n);

   cout<<endl<<"Number "<<x <<" is located at index "<<index;
   return 0;
}
