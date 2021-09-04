#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end1)
{
    while(start < end1){
    int temp = arr[start];
    arr[start] = arr[end1];
    arr[end1] = temp;
    start++;
    end1--;
}
}

void printArray(int arr[], int siz)
{
    for(int i = 0; i < siz; i++)
    {
        cout<<arr[i]<<" ";

    }
}
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

    cout << "The array numbers are: ";

    //  print array elements
    for (int j = 0; j < n; ++j) {
        cout << arr[j] << "  ";
    }
        reverseArray(arr, 0, n-1);

    cout<<endl<<" the reversed array elements are: ";
    printArray(arr, n);
    return 0;
 }
