#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}





int main(){
    // Unsorted array for linear search
    int n,element;
    cout<<"size of array is: ";
    cin >> n;
    int arr[n];
    cout<<"\nEnter sorted element in an array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int element;
    cout<< "enter the element from given array: ";
    cin>>element;
    int searchIndex = linearSearch(arr, n,element);
    cout<< element<<" is at position of index " << searchIndex;
    return 0;
}

