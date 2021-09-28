#include<bits/stdc++.h>
using namespace std;

int main()
{
  char string[80];
    cout<<"Enter string: ";
    cin.getline(string,80);

    for(int i=0; i<strlen(string); i++){                     // nested loop statement
        for(int j=i+1; j<strlen(string); j++){
            if(string[i] == string[j]){                   // logic to detect duplicate character
                cout<<string[i]<<endl;                  // duplicate character
                break;
            }
        }
    }
    cout<<"Not any duplicate element";
    return 0;
}
