#include<bits/stdc++.h>
using namespace std;

void unionOfArray(int arr1[], int arr2[], int element1, int element2)
{
    int i = 0, j = 0;
    while (i < element1 && j < element2) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    while (i < element1)
        cout << arr1[i++] << " ";

    while (j < element2)
        cout << arr2[j++] << " ";
}
int main()
{
     int n;
     cout<<"Number of element adding in array 1: ";
     cin>>n;
    int arr1[n];

    cout << "Enter Elements: ";

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }
    cout<<"Element in first array are: ";
    for (int j = 0; j < n; ++j) {
        cout << arr1[j] << "  ";
    }
    int m;
     cout<<"\nNumber of element adding in array 2: ";
     cin>>m;
    int arr2[m];

    cout << "\nEnter Elements: ";

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }
    cout<<"Element in second array are: ";
    for (int j = 0; j < m; ++j) {
        cout << arr2[j] << "  ";
    }
    cout<<"\nUnion Of these two Arrays :"<<  unionOfArray(arr1, arr2 , n, m);
}
