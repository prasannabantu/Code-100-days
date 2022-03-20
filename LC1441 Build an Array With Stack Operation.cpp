//LC1441 Build an Array With Stack Operation

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int l=target.size();
        for(int i=0,j=0;i<n;i++)
        {
            if(i+1==target[j])
            { j++;
             ans.push_back("Push");
             if(j==l) break;
            }
            else { ans.push_back("Push"); ans.push_back("Pop");}
        }
        return ans;
    }
};
