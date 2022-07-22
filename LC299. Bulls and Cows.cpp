class Solution {
public:
string getHint(string secret, string guess) {
        int n=secret.size();
        int x=0;
        int y=0;
        int acnt[10]={};
        int bcnt[10]={};

        for(int i=0; i<n; i++)
        {
                acnt[secret[i]-'0']++;
                bcnt[guess[i]-'0']++;
        }

        for(int i=0; i<n; i++)
        {
                if(secret[i]==guess[i])
                {
                        acnt[secret[i]-'0']--;
                        bcnt[guess[i]-'0']--;
                        x++;
                }
        }

        for(int i=0; i<10; i++)
        {
                y+=min(acnt[i],bcnt[i]);
        }
        return to_string(x)+'A'+to_string(y)+'B';

}
};
