template <typename T1>
void PV(T1 a)
{
        cout<<"\n";
        int n=a.size();
        for(int i=0; i<n; i++) { cout<<a[i]<<" ";}
        cout<<"\n";
}

class Solution {
public:
int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>left=nums;
        vector<int>right=nums;
        for(int i=0; i<n-1; i++)
        {
                left[i+1]+=left[i];
                right[n-i-2]+=right[n-i-1];
        }
        PV(left);
        PV(right);
        for(int i=0; i<n; i++)
        {
                if(left[i]==right[i]) return i;
        }
        // if(right[0]==0) return 0;
        // if(left[n-1]==0) return n-1;
        return -1;

}
};
