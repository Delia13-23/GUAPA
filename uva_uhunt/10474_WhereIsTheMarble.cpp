#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> pos;vector<int> cas;

int main()
{
 int N,casos,c,x; 
 int count = 1;  
   while(cin>>N>>casos and N != 0 and casos != 0)
   {
     pos.clear(); cas.clear();
     for(int i = 0; i < N; i++)
     {
       cin>>c;
       pos.push_back(c);
     }
     
     while(casos--)
     {
       cin>>x;
       cas.push_back(x);
     }
     
     sort(pos.begin(),pos.end());
     cout<<"CASE# "<<count<<":"<<endl;
     int tam = cas.size();
     for(int j = 0; j < tam; ++j)
     {
       if(binary_search(pos.begin(),pos.end(),cas[j]))
       {
          auto t = lower_bound(pos.begin(),pos.end(),cas[j]);
          cout<<cas[j]<<" found at "<<(t - pos.begin())+1<<endl;
           
      }
       else
          cout<<cas[j]<<" not found"<<endl;
     }
     count++;
   }
   return 0;
}
