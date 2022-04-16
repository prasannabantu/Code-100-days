class Solution {
public:
int maxPower(string s) {
        int maxii=0;
        int n=s.size();
        if(n==1) return 1;
        int i=0; int j=0;
        while(j<n)
        {
                int c=0;
                while(j<n && s[i]==s[j]) {j++; c++;}
                maxii=max(maxii,j-i);
                i=j; j=i+1;
        }
        return maxii;
}
};
