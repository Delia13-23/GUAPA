#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d=0,i;
    long long s=0;
    cin>>n;
    cin>>m;
    s=((n*(n+1))/2);
    if(s<=m)
      m=m%s;
        
    for(i=(n-1);i>0;i--)
    {
       d=((i*(i+1))/2); 
         if(d<=m)
            {
            m-=d; 
            break;
            }
    }
         
    cout<<m;
}
