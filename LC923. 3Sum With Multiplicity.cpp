#define M (int)1000000007
class Solution {
public:
    int threeSumMulti(vector<int>& a, int target) {
        unordered_map<int, long> c;
        for (int i : a) c[i]++;
       long ans=0;

        for(auto it1:c)
            for(auto it2:c)
            {
                int i=it1.first; int j=it2.first; int k=target-i-j;
                if(!c.count(k)) continue;
                if(i==j && j==k) ans+=((c[i])*(c[i]-1)*(c[i]-2))/6;
                else if(i==j && j!=k) ans+=((c[i])*(c[i]-1)*c[k])/2;
                else if(i<j && j<k) ans+=c[i]*c[j]*c[k];
            }
        return ans% M;
    }
};
