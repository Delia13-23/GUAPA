#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int i = 1;
    while(getline(cin,s) and s != "#")
    {
        if(s == "HOLA")
            cout<<"Case "<<i<<": SPANISH"<<"\n";
        else if(s == "HELLO")
            cout<<"Case "<<i<<": ENGLISH"<<"\n";
        else if(s == "HALLO")
            cout<<"Case "<<i<<": GERMAN"<<"\n";
        else if(s == "BONJOUR")
            cout<<"Case "<<i<<": FRENCH"<<"\n";
        else if(s == "CIAO")
            cout<<"Case "<<i<<": ITALIAN"<<"\n";
        else if(s == "ZDRAVSTVUJTE")
            cout<<"Case "<<i<<": RUSSIAN"<<"\n";
        else
            cout<<"Case "<<i<<": UNKNOWN"<<"\n";
        i++;
    }
    
    
    return 0;
}
