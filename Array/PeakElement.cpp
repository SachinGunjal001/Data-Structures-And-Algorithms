#include<iostream>
using namespace std;

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       for(int i =0; i < n; i++)
       {
           if(arr[i] < arr[i+1])
           cout<<arr[i];
       }
    }
};
int main()
{
     int n;
     cout<<"enter number of element you want to add: ";
     cin>>n;
    int arr[n];

    cout << "Enter numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Solution ob;
    ob.peakElement(arr, n);
}
