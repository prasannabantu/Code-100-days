class Solution {
public:
int convertTime(string cu, string co) {
        int time1=stoi(cu.substr(0,2))*60+stoi(cu.substr(3,2));
        int time2=stoi(co.substr(0,2))*60+stoi(co.substr(3,2));
        int diff=time2-time1;
        int c=0;
        while(diff>=60)
        {
                c++;
                diff-=60;
        }

        while(diff>=15)
        {
                c++;
                diff-=15;
        }

        while(diff>=5)
        {
                c++;
                diff-=5;
        }

        while(diff>=1)
        {
                c++;
                diff-=1;
        }

        return c;
}
};
