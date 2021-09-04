#include<iostream>
#include<unordered_set>


using namespace std;

int SubArray(int arr[], int n)
{
    unordered_set<int> Element;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if(sum == 0 != Element.end( )){
            return 0;
        }

    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter arrays element: ";
    for(int i =0; i < n; i++)
    {
        cin >>arr[i];
    }
    //SubArray(arr, n);
    if(SubArray(arr, n) == 0)
    {
        cout<<"Subarray with 0 value";
    }else
     {
    cout<<"Not any subarray has zero value";
    }
}
