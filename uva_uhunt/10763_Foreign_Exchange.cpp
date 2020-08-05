#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
   int t,x,y;
   
   while(cin>>t and t != 0)
   {
     vector<int> n(t),m(t);
   for(int i = 0; i< t; ++i)
       cin>>n[i]>>m[i];
   
   sort(n.begin(),n.end());
   sort(m.begin(),m.end());
   if(n == m)
     cout<<"YES"<<endl;
   else
     cout<<"NO"<<endl;
   }
}
