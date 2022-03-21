// LC1047 Remove All Adjacent Duplicates In String
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

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {

            if(!st.empty())
            if(s[i]==st.top()) {st.pop(); continue;}

            st.push(s[i]);

        }
        string ans;
        int l=st.size();
        while(l--)
        {
            ans.push_back(st.top()); st.pop();
        }
      //  reverse(ans.begin(),ans.end());
        return ans;
    }
};
