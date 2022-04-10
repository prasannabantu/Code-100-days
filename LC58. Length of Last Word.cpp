class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0; int poi=0;
        int n=s.size();
        int j=n-1;
		//Just notice that i>=0 codition allows i to become -1 which will be useful with test cases like "Hello"
		//because in the answer j-i becomes j+1 for such examples which would be the actual length of the string
        while(j>0 && s[j]==' ') j--; //cout<<j<<" ";
        i=j;
        while(i>=0 && s[i]!=' ') i--; //cout<<i<<" \n";
        return j-i;
    }
};
