//leetcode - 921
class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        stack<char>MyStack;
        int count = 0;
        for(int i = 0 ; i<s.length() ; i++)
        {
            char ch=s[i];
            if( !MyStack.empty() && (ch==')' && MyStack.top()=='(') )
            {
                count--;
                MyStack.pop();
            }
            else
            {
                MyStack.push(ch);
                count++;
            }
        }
        return count;
    }
};
