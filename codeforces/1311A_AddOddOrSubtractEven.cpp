#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  for(int i = 0; i < t ; ++i)
  {
     int movie = 1;
     long long a,b;
     cin>>a>>b;
     if(a == b)
         cout<<"0"<<"\n";
     else
     {
       int x = abs(a-b);
        if(x%2 == 0 and a>b)
            cout<<"1"<<"\n";
        else if(x%2 !=0 and a>b)
            cout<<"2"<<"\n";
        else if(x%2 == 0 and a<b)
            cout<<"2"<<"\n";
        else if(x%2 != 0 and a<b)
            cout<<"1"<<"\n";
     }
  }
    return 0;
}
