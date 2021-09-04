#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i]<<" ";

    }
    cout<<endl;
}

void indDeletion(int arr[], int size, int index)
{
    // code for Deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5; int index;
    display(arr, size);
    cout<<" enter the index of num you want to delete";
    cin>>index;
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}

