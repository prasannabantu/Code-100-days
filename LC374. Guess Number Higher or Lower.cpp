/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=0; int j=n; int m;
        while(i<=j)
        {

            m=(i+(j-i)/2);
            int t=guess(m);
            if(t==0) return m;
            else if(t==-1) j=m-1;
            else i=m+1;
        }
        return m;
    }
};
