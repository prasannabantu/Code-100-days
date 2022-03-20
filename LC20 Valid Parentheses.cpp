// LC20 Valid Parentheses
class Solution {
public:

    bool check(char a,char b)
    {
        if(a=='(' && b==')') return 1;
        if(a=='[' && b==']') return 1;
        if(a=='{' && b=='}') return 1;
        return 0;
    }

    bool isValid(string s) {
        stack<char>st;
        for(auto i:s)
        {
            if(i=='[' || i=='{' || i== '(')
            {
                st.push(i);
                continue;
            }
            else if(i==']' || i==')' || i== '}')
            {
                if(!st.empty())
                if(check(st.top(),i)) { st.pop(); continue;}
                return false;
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
