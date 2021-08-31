#include<bits/stdc++.h>
using namespace std;

int main()
{

/*
    1. Get a number from user.
    2. Hold the number in temporary variable
    3. Reverse the number
    4. Compare the temporary number with reversed number
    5. If both are same then print palindrome number
    6. Else print not palindrome
    */

int n, r, sum=0, temp;
cout<<"Enter the Number: ";
cin>>n;
temp = n;
while(n > 0)
{
    r = n%10;
    sum = (sum*10)+r;
    n = n/10;
}
if(temp == sum)
    cout<<"Number is palindrome....";
else
    cout<<"Number is not palindrome....";
return 0;
}
