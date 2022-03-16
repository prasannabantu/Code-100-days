LC1769 Minimum Number of Operations to Move All Balls to Each Box
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>pre;
        for(int i=0;i<n;i++)
            if(boxes[i]=='1') pre.push_back(i);

        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int sum=0;
                for(auto j:pre) sum+=abs(j-i);

             ans.push_back(sum);
            sum=0;
        }
        return ans;
    }
};
