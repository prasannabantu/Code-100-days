class Solution {
public:
bool isVowel(char c)
{
        if(c=='a' || c=='e'|| c=='i'||c=='o'||c=='u') return 1;
        if(c=='A' || c=='E'|| c=='I'||c=='O'||c=='U') return 1;
        return 0;
}

string reverseVowels(string s) {
        int i=0;
        int n=s.size();
        if(n==1) return s;
        int j=n-1;
        while(i<j)
        {
                while(i<=n-1 && !(isVowel(s[i]))) i++;
                while(j>=0 && !(isVowel(s[j]))) j--;
                if(i>=j) break;
                swap(s[i],s[j]);
                i++;
                j--;
        }
        return s;
}
};


class Solution {
public:
bool isVowel(char c)
{
        if(c=='a' || c=='e'|| c=='i'||c=='o'||c=='u') return 1;
        if(c=='A' || c=='E'|| c=='I'||c=='O'||c=='U') return 1;
        return 0;
}

string reverseVowels(string s) {
        int i=0;
        int n=s.size();
        if(n==1) return s;
        int j=n-1;
        while(i<j)
        {
                if(isVowel(s[i]))
                {
                        if(isVowel(s[j]))
                        {
                                swap(s[i],s[j]);
                                i++;
                                j--;
                        }
                        else
                                j--;
                }
                else i++;
        }
        return s;
}
};
