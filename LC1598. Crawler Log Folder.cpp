class Solution {
public:
int minOperations(vector<string>& logs) {
        int n=logs.size();
        stack<string>st;
        for(auto s:logs)
        {
                if(s=="../")
                {
                        if(!st.empty())
                                st.pop();
                }
                else if(s!="./")
                {
                        s.pop_back();
                        st.push(s);
                }
        }
        return st.size();
}
};
