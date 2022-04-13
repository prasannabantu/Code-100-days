class Solution {
public:
vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> >a(n,vector<int>(n));
        int rl=n-1; int dl=n-1; int ll=0; int ul=0;
        int c=1;

        while(ll<=rl || ul<=dl)
        {
                //Left-->right constant ul
                for(int j=ll; j<=rl; j++)
                        a[ul][j]=c++;
                ul++;
                //Up-->Down constant rl
                for(int i=ul; i<=dl; i++)
                        a[i][rl]=c++;
                rl--;
                //right-->left constant dl
                for(int j=rl; j>=ll; j--)
                        a[dl][j]=c++;
                dl--;
                //Down-->UP constant ll

                for(int i=dl; i>=ul; i--)
                        a[i][ll]=c++;
                ll++;
        }


        return a;
}
};
