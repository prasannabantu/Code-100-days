class Solution {
public:
string gcdOfStrings(string str1, string str2) {
        string m=str1+str2;
        string n=str2+str1;
        if(m==n)
        {
                // cout<<"Hello";
                return str1.substr(0,__gcd((int)str1.size(),(int)str2.size()));
                // str1.substr(0,2);
        }
        return "";

}
};
