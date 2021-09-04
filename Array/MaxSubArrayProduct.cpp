#include<bits/stdc++.h>
using namespace std;

int MaxProduct(int arr[], int n)
{
    int res = arr[0];
    for(int i = 0; i < n; i++)
    {
        int mul = arr[i];

        for(int j = i+1; j < 0; j++)
        {
            res = max(res, mul);
            mul *= arr[j];
        }
        res = max(res, mul);
    }
    return res;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum sub array product is: "<<MaxProduct(arr,n);
    return 0;
}
