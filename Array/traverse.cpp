 #include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i]<<"\n";
    }

}

int main(){

int arr[100] = {2,4,5,67,32};
display(arr, 5);
return 0;


}
