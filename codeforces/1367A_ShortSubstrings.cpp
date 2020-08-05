#include<iostream>
#include<string>

using namespace std;

int main()
{
   int t;
   string p;
   cin>>t;
   cin.ignore();
   for(int i = 0; i < t; ++i)
   {
      getline(cin,p);
      int size = p.size();
      if(size == 2)
          cout<<p<<"\n";
      else
      {
      for(int i = 0; i < size-2;i+=2)
          cout<<p[i];
          cout<<p[size-2]<<p[size-1]<<"\n";
      }
   }
    
    
    return 0;
}
