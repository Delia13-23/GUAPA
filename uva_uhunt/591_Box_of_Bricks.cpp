#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n,i=0;
   while(cin>>n and n!=0)
   {
      int s[n],sum=0;
      for(int i = 0; i < n; ++i)
      {
         cin>>s[i];
         sum+=s[i];
      }
      sum/=n;
      int min = 0,max = 0;
      for(int i = 0; i < n; ++i)
      {
          if(s[i] < sum)
              min+=abs(s[i]-sum);
          else if(s[i] > sum)
              max+=abs(s[i]-sum);
      }
      i++;
      if(min==max)
      {
        cout<<"Set #"<<i<<"\n";
        cout<<"The minimum number of moves is "<<min<<".\n\n";
      }
   }
    
    return 0;
}
