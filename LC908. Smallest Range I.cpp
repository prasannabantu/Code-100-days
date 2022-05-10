class Solution {
public:
int smallestRangeI(vector<int>& A, int K) {
        return max(0, *max_element(begin(A), end(A)) - K - (*min_element(begin(A), end(A)) + K));

}
};
