#include <bits/stdc++.h>
using namespace std;
int main()
{
    int length;
    cout<<"Number of element in array: ";
    cin>>length;
    int arr[length];
    for(int i=0; i < length; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(arr[i] == arr[j])
              cout<<"Duplicate Element in array: " <<arr[j];
                else
                    cout<<"There is no duplicate element in array";
        }
    }
    return 0;
}
