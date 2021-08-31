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
    int arr[] = {1,3,5,56,4,3,23,5,4,54,634,56,34};
    int size = sizeof(arr)/sizeof(int);
    int element;
    cout<< "enter the element from given array: ";
    cin>>element;
    int searchIndex = linearSearch(arr, size, element);
    cout<< element<<" is at position of index " << searchIndex;
    return 0;
}

