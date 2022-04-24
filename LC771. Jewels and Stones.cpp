class Solution {
public:
int numJewelsInStones(string jewels, string stones) {
        int count=0;
        int acnt[26]={};
        int Acnt[26]={};
        for(auto c:jewels)
        {
                if(islower(c))
                        acnt[c-'a']++;
                else
                        Acnt[c-'A']++;
        }

        for(auto c:stones)
        {
                if(islower(c))
                {
                        if(acnt[c-'a']>0) count++;
                }
                else
                {
                        if(Acnt[c-'A']>0) count++;
                }
        }
        return count;
}
};
