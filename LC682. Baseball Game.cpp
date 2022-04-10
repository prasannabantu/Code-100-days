class Solution {
public:

    int calPoints(vector<string>& ops) {
        stack<int>st;
        for(auto c:ops)
        {   char i=c[0];
            if(i=='+')
            {
                int a=st.top();
                st.pop();
                int b=st.top()+a;
                st.push(a);
                st.push(b);
            }
            else if(i=='D')
            {
                st.push(st.top()*2);
            }
            else if(i=='C')
            {
                st.pop();
            }
            else
                st.push(stoi(c));
        }
        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
