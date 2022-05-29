class Solution {
public:
string removeOccurrences(string s, string part) {
        int n=part.size();
        while(1)
        {
                size_t t=s.find(part);
                if(t==string::npos) break;
                s=s.substr(0,t)+s.substr(n+t,s.size());
                cout<<s<<" ";
        }
        return s;
}
};
