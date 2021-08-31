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
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element;
    cout<< "enter the element from given array: ";
    cin>>element;
    int searchIndex = binarySearch(arr, size, element);
    cout<< element<<" is at position of index " << searchIndex;
    return 0;
}

