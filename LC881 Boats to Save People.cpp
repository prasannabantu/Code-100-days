int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int c=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(people[i]+people[j]<=limit) i++;
            c++; j--;
        }
        return c;
    }
