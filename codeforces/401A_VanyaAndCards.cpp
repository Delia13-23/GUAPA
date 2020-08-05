#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n,x,c;
       cin>>n>>x;
       int sum = 0;
       for(int i = 0; i < n; ++i)
       {
           cin>>c;
           sum+=c;
       }
       sum = abs(sum);
       if(sum == 0)
           cout<<"0"<<"\n";
       else if(sum <= x)
           cout<<"1"<<"\n";
       else
       {
         if(sum%x == 0)
             cout<<sum/x<<"\n";
         else
             cout<<sum/x+1<<"\n";
       } 
    return 0;
}
