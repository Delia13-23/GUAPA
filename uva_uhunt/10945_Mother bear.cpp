#include<iostream>
#include<string>
#include<ctype.h>
#include<algorithm>

using namespace std;


bool isPolindrome(string &cad)
{
   string aux,aux1;
   for(int i=0;i<cad.size();i++)
   {
    
     if(cad[i] >= 'a' and cad[i] <= 'z' or cad[i] >= 'A' and cad[i] <= 'Z') 
     { 
       string p;
       p.push_back(toupper(cad[i])); 
       aux1.append(p);
     }
      
   }  
    aux=aux1;
    
    reverse(aux1.begin(),aux1.end());
    return aux==aux1;  
}

main()
{
    string frase;
    while(getline(cin,frase) and frase!= "DONE")
    {
        if(isPolindrome(frase))
        {
            cout<<"You won't be eaten!"<<endl;
        }
        else
        {
            cout<<"Uh oh.."<<endl;

        }
    }
}
