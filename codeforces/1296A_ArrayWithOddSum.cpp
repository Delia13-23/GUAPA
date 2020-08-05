#include<iostream>
using namespace std;

int main()
{
    int t,a[20001];
    cin>>t;
    for(int i = 0; i < t; ++i)
    {
       int n,odd=0,even=0;
       cin>>n;
       for(int i = 0; i < n;++i)
       {
          cin>>a[i];
          if(a[i]&1) odd++;
          else
              even--;
       }
       if(odd==0 or(even==0 and n%2==0))
           cout<<"NO"<<"\n";
       else
           cout<<"YES"<<"\n";
    }
    
    return 0;
}
