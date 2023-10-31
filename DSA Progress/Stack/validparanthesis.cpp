//leetcode-20
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto c:s)
        {
            if(c=='(' ||  c=='{' || c=='[')
            {
                st.push(c);
            }
            else
            {
                if(st.empty()||
                (c==')' && st.top()!='(')||
                (c=='}' && st.top()!='{')||
                (c==']' && st.top()!='['))
                {
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        if(st.empty()){return true;}
        else{return false;}
    }
};
