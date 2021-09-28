#include<bits/stdc++.h>
using namespace std;

int main()
{
    char string[] = "samas";
    bool flag = true;

    //Iterate the string forward and backward, compare one character at a time
    //till middle of the string is reached
    for(int i = 0; i < strlen(string)/2; i++){
        if(string[i] != string[strlen(string)-i-1]){
            flag = false;
            break;

        }
    }

    if(flag)
        cout<<"Given string is palindrome";
    else
        cout<<"Given string is not a palindrome";

    return 0;
}
