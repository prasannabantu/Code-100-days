// LC412 Fizz Buzz
class Solution {
public:
    vector<string> fizzBuzz(int n) {
           vector<string>ans;
        for(int i=1;i<=n;i++)
        {
            if(i%15==0) ans.push_back("FizzBuzz");
            else if(i%3==0) ans.push_back("Fizz");
            else if(i%5==0) ans.push_back("Buzz");
            else
                ans.push_back(to_string(i));
        }
        return  ans;
    }
};




class Solution {
public:
    vector<string> fizzBuzz(int n) {
           vector<string>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(to_string(i+1));
        }

        for(int i=2;i<n;i+=3)
        {
            ans[i]="Fizz";
        }

        for(int i=4;i<n;i+=5)
        {
            ans[i]="Buzz";
        }
        

        for(int i=14;i<n;i+=15)
        {
            ans[i]="FizzBuzz";
        }
        return  ans;
    }
};
