// 04-03-2022
// Fizz and Buzz refer to any number that's a multiple of 3 and 5 respectively. In other words, if a number is divisible
// by 3, it is substituted with fizz; if a number is divisible by 5, it is substituted with buzz. If a number is simultaneously
// a multiple of 3 AND 5, the number is replaced with "fizz buzz." In essence, it emulates the famous children game
// "fizz buzz".

#include<iostream>

using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    if(i%15==0)
    {
      printf("%d fizz buzz\n",i);
    }
    else
    {
      if(i%3==0) printf("%d fizz\n",i);
      else
      if(i%5==0) printf("%d buzz\n",i);
    }
  }
  return 0;
}
