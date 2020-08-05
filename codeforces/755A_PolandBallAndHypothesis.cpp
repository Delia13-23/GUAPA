#include<iostream>
using namespace std;

bool prime(int m)
{
    bool s;
    for(int i = 2; i < m; ++i)
    {
       if(m%i == 0) {s = false;break;}
       else 
           s = true;
    }
    return s;
}

int main()
{
   int n,m,aux;
   cin>>n;
   
   for(int i = 1;i <= 1000;++i)
   {
      aux=i;
      m = (n*aux)+1;
      if(!prime(m)) break;
   }
    
    cout<<aux;
    
    return 0;
}
