class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int cnt[1001]={};
        int ncnt[1001]={};
        for(auto i:arr)
        {
            if(i>=0)
                cnt[i]++;
            else
                ncnt[-i]++;
        }

        if(cnt[0]>=2) return 1;
        for(int i=1;i<=500;i++)
        {
            if(cnt[i]>0)
            {
                if(cnt[2*i]>0)
                    return 1;
            }
            else
            if(ncnt[i]>0)
            {
                if(ncnt[2*i]>0)
                    return 1;

            }
        }
        return 0;
    }
};
