class Solution {
public:
vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int ans=0;
        int m=list1.size();
        int n=list2.size();
        int minV=INT_MAX;
        int minI;
        vector<string>res;
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(list1[i]==list2[j])
                        {
                                if(minV==i+j)
                                {
                                        res.push_back(list1[i]);
                                }
                                else if(minV>=i+j)
                                {
                                        minV=i+j;
                                        res.clear();
                                        res.push_back(list1[i]);
                                }

                        }
                }
        }
        return res;

}
};
