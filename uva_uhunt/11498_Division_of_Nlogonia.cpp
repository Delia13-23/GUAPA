#include<iostream>
using namespace std;

int main()
{
  int v,x,y,n,m;
  while(cin>>v and v>0)
  {
      cin>>n;
      cin>>m;
      while(v--)
      {
       cin>>x;
       cin>>y;
       if(x==n || y==m)
           cout<<"divisa"<<endl;
       else if(x>n and y>m)
           cout<<"NE"<<endl;
       else if(x<n and y>m)
           cout<<"NO"<<endl;
       else if(x>n and y<m)
           cout<<"SE"<<endl;
       else
           cout<<"SO"<<endl;
      }
  }
  return 0;
}
