#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i=1;
    string p;
    while(getline(cin,p) and p!="*")
    {
        if(p == "Hajj")
            cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<"\n";
        else
            cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<"\n";
         i++;
    }
    
    return 0;
}
