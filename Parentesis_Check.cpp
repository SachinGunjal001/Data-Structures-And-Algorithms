#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// to check if brackets are balanced
bool areBalanced(string expr)
{
    stack<char> s;
    char x;

    //traverse the expression
    for(int i = 0; i < expr.length(); i++)
    {
        if(expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
            {
                s.push(expr[i]);
                continue;
            }
            //if current character is not opening bracket, the it must be closing.
            // so stack cannot be empty
            if(s.empty())
                return false;

            switch (expr[i]){

        case ')':

            //store the top element in a
            x = s.top();
            if(x == '{' || x == '[')
                return false;
            break;

            case '}':

            // store element in b
            x = s.top();
            s.pop();
            if(x == '(' || x == '[')
                return false;
            break;

            case ']':
                //store the top element in c
                x = s.top();
                s.pop();
                if(x == '(' || x == '{')
                    return false;
                break;


            }
    }

    // check empty stack
    return (s.empty());

}

int main()
{
    string expr = "{()]}[]";
    // function  call
    if(areBalanced(expr))
        cout<< "Balanced";
    else
        cout<< "not balanced";
    return 0;
}
