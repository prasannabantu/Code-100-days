class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int j=letters.size()-1;
        int i=0; int ans=0;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(letters[mid]>target)
            {
                ans=mid; j=mid-1;
            }
            else i=mid+1;

        }
        return letters[ans];
    }
};
