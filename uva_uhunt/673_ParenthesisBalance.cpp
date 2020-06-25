#include<iostream>
#include<stack>
#include<string>

using namespace std;

int T;
string caracter;
int main()
{
    char c;
    bool possible;
    stack<char> Brackets;
    cin>>T;
    cin.ignore();
    for(int i=0;i<T;i++)
    {
        getline(cin,caracter);
        possible = true;
   if(caracter.size()%2==0)
    {
        
        for(int j=0;j<caracter.size() and possible;j++)
        {
             c=caracter[j];
            if(c == '[' or c == '(')
             {
                Brackets.push(c);
             }
            else if(c == ')')
            {
                
                if(!Brackets.empty() and Brackets.top() == '(')
                   Brackets.pop();
                else
                    possible = false;
            }
            else if(c == ']')
            {
                if(!Brackets.empty() and Brackets.top() == '[')
                  Brackets.pop();
                else
                    possible = false;
            }
     
         }
           if(Brackets.empty() and possible)
             cout<<"Yes"<<endl;
           else
            {
                cout<<"No"<<endl;
               while(!Brackets.empty())
               {
                 Brackets.pop();
               }
            }
         
   }
    else
        cout<<"No"<<endl;
  }
}
