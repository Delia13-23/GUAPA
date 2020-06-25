#include<bits/stdc++.h>
using namespace std;

int n,valor;

int main()
{
    set<int> s;
    cin>>n;
    if(n>=2)
    {
    for(int i=0;i<n;i++)
    {
      cin>>valor;
      s.insert(valor);  
    }
    if(s.size()>=2)
    {
     auto m = upper_bound(s.begin(),s.end(),*s.begin());
     cout<<*m;
     s.clear(); 
    }
    else
        cout<<"NO";
    }else
        cout<<"NO";
}
    
