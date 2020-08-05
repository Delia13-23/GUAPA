#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    
    if(s >= abs(a)+abs(b) and (s - (abs(a) + abs(b)))%2==0)
       cout<<"Yes";
    else
        cout<<"No";
    
    return 0;
}
