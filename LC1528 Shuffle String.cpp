1528. Shuffle String

class Solution {
public:
    string restoreString(string s, vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                    char c=s[i];
                    s[i]=s[j];
                    s[j]=c;
                }
        }
        return s;
    }

};
