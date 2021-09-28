#include<bits/stdc++.h>
using namespace std;

int FirstAndLastOccurence(int a[], int n, int x)
{
    int index1, index2;

    // for first
    index1 = lower_bound(a, a+n, x) - a;
    //here we are subtracting a because we need index unless we'll get iterator
    /* for first element:

    low=0, high=n-1, element = -1
    while(low <=high){
        int mid= (low+high)/2;

        if(arr[mid] > x)
            high= mid-1
        else if(arr[mid] < x
             low = mid+1
        else
             element = mid;
             high = mid-1

    return element
    */
    //for last
    index2 = upper_bound(a, a+n, x) - a - 1;
    // sub 1 because we upperBound gives next value
    /* for last element

       int low = 0, high = n - 1, element = -1;
    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;


        else
        {
            element = mid;
            low = mid + 1;
        }
    }
    return element;
    */

    if(index1 == -1){
         cout<<"Nahi ye ho nahi sakta...";
    }else{
         cout<< "Pahla wala element: " << index1<<endl;
         cout<< "Last wala element: " << index2;
         }


}
int main()
{
    int n,x;
    cout<<"size of array is: ";
    cin >> n;
    int a[n];
    cout<<"\nEnter sorted element in an array: ";
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"\nEnter Element: ";
    cin>>x;
    FirstAndLastOccurence(a, n, x);
    return 0;
}
