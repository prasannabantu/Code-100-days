int balancedStringSplit(string s) {
        int c=0; int m=0;
        int n=s.size();
        int lc=0; int rc=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L') lc++;
            if(s[i]=='R') rc++;
            if(lc==rc)
            {
                c++;
                lc=0; rc=0;
            }
        }
        return c;
    }
