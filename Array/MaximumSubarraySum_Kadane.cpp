//This is Kadane's Algorithm which give maximum subArray sum

#include<bits/stdc++.h>
using namespace std;

int MaxSum_KadaneAlgo(int arr[], int len)
{
    int Max = 0;
    int CurrentMax = 0;
    for(int i=0; i < len; i++)
    {
        CurrentMax = max(arr[i], CurrentMax + arr[i]);
        Max = max(Max, CurrentMax);

    }
    return Max;
}

int main()
{
    cout<<"Enter the array length: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"The Maximum Sum is: "<<MaxSum_KadaneAlgo(arr,n)<<endl;
    return 0;
}
