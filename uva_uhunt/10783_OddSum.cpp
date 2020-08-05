#include<iostream>
using namespace std;

int main()
{
   int T,a,b,i,j;
   
   cin>>T;
   for(j = 0; j < T; ++j)
   {
   cin>>a;
   cin>>b;
   int sum=0;
   for(i = a; i <= b; ++i)
   {
       if(i%2 != 0)
         sum+=i;    
   }
    
    cout<<"Case "<<j+1<<": "<<sum<<endl;
   }
    
    return 0;
}
