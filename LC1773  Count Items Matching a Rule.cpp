

//1773. Count Items Matching a Rule
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int o=0;
        if(ruleKey=="color") o=1;
        else if(ruleKey=="name") o=2;
        int count=0;
        for(int i=0;i<n;i++)
            if(items[i][o]==ruleValue) count++;
        return count;
    }
};
