class Solution {
public:

bool areNumbersAscending(string s) {
        int n =s.size();
        stringstream ss(s);
        vector<int>ans;
        string word;
        while(ss>>word)
        {
                if(isdigit(word[0]))
                        ans.push_back(stoi(word));
        }
        for(int i=1; i<ans.size(); i++)
        {
                if(ans[i]-ans[i-1]<=0) return 0;
        }
        return 1;
}
};
