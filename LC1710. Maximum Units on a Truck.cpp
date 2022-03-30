class Solution {
public:
    struct dbox
    {
        int nb;
        int upb;
        float rat;
    };

    static bool cmp(dbox a,dbox b)
    {
        if(a.upb>b.upb) return 1;
        return 0;
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int T) {
        int n=boxTypes.size();
        vector<dbox>b(n);
        for(int i=0;i<n;i++)
        {
            b[i].nb=boxTypes[i][0];
            b[i].upb=boxTypes[i][1];
            b[i].rat=(float)boxTypes[i][1]/boxTypes[i][0];
        }
        sort(b.begin(),b.end(),cmp);
        int poi=0; int c=0;
        while(T>0)
        {
            int m=min(T,b[poi].nb); cout<<m<<" ";
            c+=m* b[poi].upb;
            T-=m;
            poi++;
            if(poi>=n) break;
        }
        cout<<"\n";
        return c;
    }
};
