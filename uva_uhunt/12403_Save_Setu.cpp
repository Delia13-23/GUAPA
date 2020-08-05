#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,c,sum = 0;
    string s;
    cin>>t;
    for(int i = 0; i < t; ++i)
    {
        cin.ignore();
        cin>>s;
        if(s != "report")
        {
            cin>>c; 
            sum+=c;
        }
        else
           cout<<sum<<"\n";
    }
    return 0;
}
