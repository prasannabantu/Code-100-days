class Solution {
public:
double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n<=2) return 0;
        int pre=(n*1.0)*(5.0)/100;
        return (accumulate(arr.begin()+pre,arr.end()-pre,0)*1.0)/(n-2*pre);
}
};
