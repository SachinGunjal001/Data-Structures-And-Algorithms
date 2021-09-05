#include<iostream>
using namespace std;

void Sorting(int arr[], int n)
{
    int low = 0, mid = 0, high = n-1;

    while(mid <= high){
       switch(arr[mid]){
   case 0:
    swap(arr[low++],arr[mid++]);
    break;

   case 1:
    mid++;
    break;

   case 2:
    swap(arr[mid], arr[high--]);
    break;
       }
    }
}
void display(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}

// Driver Code
int main()
{
        int n;
     cout<<"enter number of element you want to add: ";
     cin>>n;
    int arr[n];

    cout << "Enter numbers: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    Sorting(arr, n);

    cout << "array after operations ";

    display(arr, n);

    return 0;
}
