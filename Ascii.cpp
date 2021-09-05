#include<iostream>
using namespace std;

void AsciiConverter(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << char((int)s[i] + 5) << " ";
    }
}

int main()
{

    string str;
    cout << "Enter string to convert into ASCII: ";
    cin >> str;
    AsciiConverter(str);
    return 0;
}

