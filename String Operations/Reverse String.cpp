#include<bits/stdc++.h>
using namespace std;

int StringReverse(string& str)
{
    int n = str.length();
    for(int i = 0; i < (n/2); i++){
        swap(str[i],str[n - i - 1]);


    }
}

    int main()
    {
        string str;
        cout<<"Enter the string: ";
        cin>>str;
        StringReverse(str);
        cout<<str;
        return 0;
    }

