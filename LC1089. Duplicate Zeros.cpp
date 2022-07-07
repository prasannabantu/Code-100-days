class Solution {
public:
void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int>temp;
        for(auto num:arr)
        {
                if(num) temp.push_back(num);
                else
                {
                        temp.push_back(0);
                        temp.push_back(0);
                }
        }
        for(int i=0; i<n; i++)
                arr[i]=temp[i];
}
};
