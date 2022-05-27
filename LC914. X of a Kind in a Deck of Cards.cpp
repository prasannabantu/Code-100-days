class Solution {
public:
bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;

        for(auto num:deck)
                mp[num]++;

        int temp;
        std::map<int,int>:: iterator it=mp.begin();
        for( ; it!=mp.end(); it++)
                if(it->second!=0)
                {
                        temp=it->second;
                        break;
                }
        for( ; it!=mp.end() ; it++)
        {
                if(it->second!=0)
                {
                        temp=__gcd(temp,it->second);
                }
        }

        if(temp>=2) return 1;
        return 0;


}
};
