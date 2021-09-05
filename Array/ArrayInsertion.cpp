#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i]<<" ";
    }
}
int indInsertion(int arr[], int size, int element, int capacity, int index){
    // code for Insertion
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int n;
    cout<<"Enter number of element you like to add in array: ";
    cin>>n;
    int arr[n];
    for(int i =0; i < n; i++){
    cin>>arr[i];
    }

    int index=1; int element;
    display(arr, n);
    cout<<"\nenter the element: ";
    cin>>element;
    indInsertion(arr, n, element, 100, index);
    n +=1;
    display(arr, n);
    return 0;
}
