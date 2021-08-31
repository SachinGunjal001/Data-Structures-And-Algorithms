#include<iostream>
using namespace std;

int getMin(int arr[],int n)
{
    int res = arr[0];
    for(int i = 1; i < n; i++)
    res = min(res, arr[i]);
    return res;
}


int getMax(int arr[],int n)
{
    int res = arr[0];
    for(int i = 1; i < n; i++)
    res = max(res, arr[i]);
    return res;
}

int main()
 {
     int n;
     cout<<"enter number of element you want to add: ";
     cin>>n;
    int arr[n];

    cout << "Element in the array: ";

    //  store input from user to array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }


    //  print array elements
    //for (int j = 0; j < n; ++j) {
      //  cout << arr[j] << "  ";
    //}
  cout<<endl<<"Maximum number in the array is: "<<getMax(arr, n)<<endl;
    cout<<"Minimum number in the array is: "<<getMin(arr, n);


 }
