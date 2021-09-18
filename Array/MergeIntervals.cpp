#include<bits/stdc++.h>
using namespace std;

struct Gap{
    int start, end;
};

bool mycomp(Gap a, Gap b){
    return a.start < b.start;
}

void Merge(Gap arr[], int n)
{
    sort(arr, arr+n, mycomp);

    int index = 0;

    //traverse all intervals
    for(int i = 1; i < n; i++)
    {
        if(arr[index].end >= arr[i].start)
        {
            arr[index].end = max(arr[index].end, arr[i].end);
            arr[index].start = min(arr[index].start, arr[i].start);

        }else{
            index++;
            arr[index] = arr[i];
        }
    }
    cout<<"\n Merged intervals are: ";
    for(int i = 0; i <=index; i++)
        cout<<"[" << arr[i].start <<","<<arr[i].end<<"]";

}
int main()
{
    Gap arr[] = {{1,3}, {3, 7},{2,5} };
    int n = sizeof(arr)/sizeof(arr[0]);
    Merge(arr, n);
    return 0;
}
