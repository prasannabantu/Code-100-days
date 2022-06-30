class Solution {
public:
char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int iM=0;
        int maxii=releaseTimes[0];
        int n=releaseTimes.size();
        char ans=keysPressed[0];
        for(int i=1; i<n; i++)
        {
                int k=releaseTimes[i]-releaseTimes[i-1];
                if(k>=maxii)
                {
                        if(k==maxii)
                        {
                                if(keysPressed[i]>keysPressed[iM])
                                {
                                        iM=i;
                                }
                        }
                        else
                        {
                                iM=i;
                                maxii=k;
                        }
                }
        }
        return keysPressed[iM];
}
};
