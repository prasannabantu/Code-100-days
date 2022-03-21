LC1047 Remove All Adjacent Duplicates In String
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(auto c:s)
        {

            if(!st.empty())
            if(c==st.top()) {st.pop(); continue;}

            st.push(c);

        }
        string ans;
        int l=st.size();
        while(l--)
        {
            ans.push_back(st.top()); st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
