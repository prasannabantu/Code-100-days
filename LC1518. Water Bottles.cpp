#define DEB(X) cout<< #X<<"="<<X<<" ";
class Solution {
public:
int numWaterBottles(int numB, int numE) {
        int extra = 0;
        int count = numB;

        while(numB>=numE)
        {
                extra=numB%numE;
                numB/=numE;
                count+=numB;
                numB+=extra;
        }
        return count;

}
};
