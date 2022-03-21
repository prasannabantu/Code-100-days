//LC1021 Remove Outermost Parentheses
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;

        for(auto i:s)
        {
            if(!st.empty())
            if(st.size()!=0 && i=='(')
            {
                ans.push_back(i);
            }

            if(i=='(') st.push(i);
            else
            {
                if(!st.empty())
                {
                if(st.size()!=1) ans.push_back(i);
                st.pop();
                }
            }


        }
        return ans;
    }
};



class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;

        for(auto i:s)
        {
           if(i=='(')
           {
               if(st.size()!=0) ans.push_back(i);
               st.push(i);

           }
           else
           {
               if(st.size()!=1) ans.push_back(i);
                st.pop();

           }



        }
        return ans;
    }
};
