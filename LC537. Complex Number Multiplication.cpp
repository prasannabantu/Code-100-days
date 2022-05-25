class Solution {
public:
vector<int> compsolve(string s)
{
        vector<int>a(2);
        int n=s.size();
        int i=0; int j=0;
        while( j<n && s[j]!='+') j++;
        cout<<j<<"  ";
        // cout<<s.substr(0,j)<<"  "<<s.substr(j+1,n-j-2);
        a[0]=stoi(s.substr(0,j));
        a[1]=stoi(s.substr(j+1,n-1-j-1));
        return a;
}
string complexNumberMultiply(string num1, string num2) {
        vector<int>n1=compsolve(num1);
        vector<int>n2=compsolve(num2);
        string ans="";
        int real=n1[0]*n2[0]-n1[1]*n2[1];
        int img=n1[0]*n2[1]+n2[0]*n1[1];
        ans+=to_string(real);
        ans+='+';
        ans+=to_string(img);
        ans+='i';
        return ans;
}
};
