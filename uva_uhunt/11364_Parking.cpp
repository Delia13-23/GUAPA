#include<iostream>
#include<set>
#include<cmath>
using namespace std;

int main()
{
    int T,n,a;
    cin>>T;
    while(T--)
    {
        set<int> s;
        cin>>n;
        for(int i = 0; i < n; ++i)
        {
           cin>>a; 
           s.insert(a);
        }
        cout<<abs(*s.begin()-*s.crbegin())*2<<"\n";
    }
    return 0;
}
