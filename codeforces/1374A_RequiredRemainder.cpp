#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i = 0; i < t; ++i)
   {
       long long x,y,n;
       cin>>x>>y>>n;
       int ans = (n-y)/x;
       cout<<(x*ans)+y<<endl;
   }
   return 0;
}
