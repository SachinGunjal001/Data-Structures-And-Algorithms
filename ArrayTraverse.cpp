 #include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i]<<"\n";
    }

}

int main(){
int n;
cout<< " enter number of elements you like to add: ";
cin >>n;
int arr[n];
for(int i = 0; i < n; ++i)
{
    cin >> arr[i];
}
//int arr[100] = {2,4,5,67,32};
display(arr, n);
return 0;


}
