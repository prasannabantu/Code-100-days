class Solution {
public:
bool strongPasswordCheckerII(string password) {
        int n=password.size();
        if(n<=7) return 0;
        bool isl=0, isB=0, hasN=0, hasS=0, hasA=1;
        string chara="!@#$%^&*()-+";
        for(auto c:password)
        {
                if(islower(c)) isl=1;
                if(isupper(c)) isB=1;
                if(isdigit(c)) hasN=1;
                if(chara.find(c)!=string::npos) hasS=1;
        }
        for(int i=1; i<n; i++)
        {
                if(password[i-1]==password[i]) hasA=0;
        }

        return isl && isB && hasN && hasS && hasA;
}
};
