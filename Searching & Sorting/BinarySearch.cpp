#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;

}

int main(){

    // Sorted array for binary search
    int n,element;
    cout<<"size of array is: ";
    cin >> n;
    int arr[n];
    cout<<"\nEnter sorted element in an array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    cout<< "enter the element from given array: ";
    cin>>element;
    int searchIndex = binarySearch(arr, n,element);
    cout<< element<<" is at position of index " << searchIndex;
    return 0;
}

