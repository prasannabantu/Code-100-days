// 1720. Decode XORed Array

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int>e(n+1);
        int temp;
        e[0]=first;

        for(int i=1;i<=n;i++)
        {
            e[i]=e[i-1]^encoded[i-1];
        }
        return e;
    }
};
