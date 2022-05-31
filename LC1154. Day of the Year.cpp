class Solution {
public:
int isLeap(int year)
{
        if ( (year % 4 == 0) && ((year % 100 != 0)) || (year % 400 == 0))
                return true;

        return false;
}

int dayOfYear(string date) {
        int sum=0;
        int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        cout<<year<<" "<<month<<" "<<day<<" ";
        sum+=day;
        for(int i=1; i<month; i++)
        {
                sum+=arr[i];
        }
        if(isLeap(year) && month>=2)
                sum+=1;
        if(isLeap(year) && month==2 && day<=29)
                sum-=1;

        return sum;


}
};
