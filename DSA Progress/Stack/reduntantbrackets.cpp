#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>MyStack;
    for(int i = 0 ; i < s.length() ; i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='*' || ch=='+' || ch=='-' || ch=='/')
        {
            MyStack.push(ch);
        }
        else if(ch==')')
        {
            bool isReduntant=true;
            while(MyStack.top() != '(')
            {
                if(MyStack.top()=='+' || MyStack.top()=='-' || MyStack.top()=='*' || MyStack.top()=='/' )
                {
                    isReduntant=false;
                }
                MyStack.pop();
            }
            MyStack.pop();
            if(isReduntant){return true;}
        }
    }
    return false;
}
//coding ninjas - reduntant brackets
