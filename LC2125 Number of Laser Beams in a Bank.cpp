// LC2125 Number of Laser Beams in a Bank

class Solution {
public:
int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int count=0;
        int sum=0;
        int temp=0;
        for(auto i:bank)
        {
                for(auto k:i)
                        if(k=='1') count++;
                sum+=temp*count;
                if(count!=0) temp=count;
                count=0;
        }

        return sum;
}
};
