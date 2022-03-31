class Solution {
public:
    int binaryGap(int n) {
        bitset<32>bs(n);
        int c=0,m=0;
        int i=0,j=1;
        while(bs[i]!=1) { i++; if(i>=32) break;}
        i--;
        j=i+1;
        while(max(i,j)<32)
        {

            while(j<=31 && bs[j+1]!=1) { j++;}
            if(j>31) break;
            //cout<<i<<" "<<j<<"---- ";
           // j--;
            c=j-i;
            i=j; j++;
            m=max(c,m);
        }
        return m;
    }
};
