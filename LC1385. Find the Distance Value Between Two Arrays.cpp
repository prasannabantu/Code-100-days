class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1=arr1.size();
        int n2=arr2.size();
        int c=0; int t; bool f=1;
        for(int i=0;i<n1;i++)
        {

           for(int j=0;j<n2;j++)
           {
               if(abs(arr1[i]-arr2[j])<=d) {f=0; continue;}
           }
            if(f==1) c++;
            else f=1;
        }
        return c;
    }
};
