#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, maxEle;
    cout<<"Enter two element: ";
    cin>>n1>>n2;

    //Maximum element will stored in max

    maxEle = (n1 > n2)? n1:n2;

    while(1){
        if(maxEle % n1 == 0 && maxEle % n2 == 0){
            cout<<"The LCM of two numbers is: "<<maxEle;
            break;
        }
        ++maxEle;
    }
    return 0;
}
