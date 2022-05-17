class Solution {
public:
int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto &s:tokens)
        {
                if(s == "+"  || s== "-" || s== "/" || s == "*")
                {
                        int a=st.top(); st.pop();
                        int b=st.top(); st.pop();
                        if(s=="+")
                                st.push(b+a);
                        else if(s=="*")
                                st.push(b*a);
                        else if(s=="/")
                                st.push(b/a);
                        else if(s=="-")
                                st.push(b-a);
                }
                else
                {
                        st.push(stoi(s));
                }

        }
        return st.top();
}
};
