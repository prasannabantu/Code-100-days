// 2114. Maximum Number of Words Found in Sentences


class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int n=sen.size();
        int count;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            count=0;
            int l=sen[i].size();
            for(int j=0;j<l;j++)
                if(sen[i][j]==' ') count++;
            count++;
            maxi=max(maxi,count);
        }
        return maxi;

    }
};
