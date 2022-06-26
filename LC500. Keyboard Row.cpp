class Solution {
public:
vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        bitset<26>a1;
        bitset<26>a2;
        bitset<26>a3;

        for(auto c:s1)
                a1[c-'a']=1;
        for(auto c:s2)
                a2[c-'a']=1;
        for(auto c:s3)
                a3[c-'a']=1;


        for(auto s:words)
        {
                bitset<26>tmp;
                for(auto c:s)
                {
                        tmp[tolower(c)-'a']=1;
                }
                int sum1=(tmp & a1).count();
                int sum2=(tmp & a2).count();
                int sum3=(tmp & a3).count();

                if(sum1==tmp.count() && sum2==0 && sum3==0) ans.push_back(s);
                if(sum2==tmp.count() && sum1==0 && sum3==0) ans.push_back(s);
                if(sum3==tmp.count() && sum1==0 && sum2==0) ans.push_back(s);
                tmp.reset();

        }
        return ans;
}
};
