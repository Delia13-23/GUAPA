#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string frase;
    
    while(getline(cin,frase))
    {
       for(int i=0;i<frase.size();i++)
       {
           if(frase[i]=='1')
                 cout<<'`';
           if(frase[i]=='2')
                 cout<<'1';
           if(frase[i]=='3')
		         cout<< '2';
           if(frase[i]=='4')
		         cout<< '3';
           if(frase[i]=='5')
		         cout<< '4';
           if(frase[i]=='6')
		         cout<< '5';
           if(frase[i]=='7')
		         cout<< '6';
           if(frase[i]=='8')
		         cout<< '7';
           if(frase[i]=='9')
		         cout<< '8';
           if(frase[i]=='0')
		         cout<< '9';
           if(frase[i]=='-')
                 cout<< '0';
           if(frase[i]=='=')
		         cout<< '-';
           if(frase[i]=='W')
		         cout<< 'Q';
           if(frase[i]=='E')
		         cout<< 'W';
           if(frase[i]=='R')
                 cout<< 'E';
           if(frase[i]=='T')
		         cout<< 'R';
           if(frase[i]=='Y')
                 cout<< 'T';
           if(frase[i]=='U')
                 cout<< 'Y';
           if(frase[i]=='I')
		         cout<< 'U';
           if(frase[i]=='O')
		         cout<< 'I';
           if(frase[i]=='P')
		         cout<< 'O';
           if(frase[i]=='[')
		         cout<< 'P';
           if(frase[i]==']')
		         cout<< '[';
           if(frase[i]=='\\')
		         cout<< ']';
           if(frase[i]=='S')
		         cout<< 'A';
           if(frase[i]=='D')
		         cout<< 'S';
           if(frase[i]=='F')
		         cout<< 'D';
           if(frase[i]=='G')
		         cout<< 'F';
           if(frase[i]=='H')
		         cout<< 'G';
           if(frase[i]=='J')
		         cout<< 'H';
           if(frase[i]=='K')
		         cout<< 'J';
           if(frase[i]=='L')
		         cout<< 'K';
           if(frase[i]==';')
		         cout<< 'L';
           if(frase[i]=='\'')
		         cout<< ';';
           if(frase[i]=='X')
		         cout<< 'Z';
           if(frase[i]=='C')
		         cout<< 'X';
           if(frase[i]=='V')
                 cout<< 'C';
           if(frase[i]=='B')
		         cout<< 'V';
           if(frase[i]=='N')
		        cout<< 'B';
           if(frase[i]=='M')
		        cout<< 'N';
           if(frase[i]==',')
		        cout<< 'M';
           if(frase[i]=='.')
		        cout<< ',';
           if(frase[i]=='/')
		        cout<< '.';
           if(frase[i]==' ')
		        cout<< " ";
            
       }
       cout<<"\n";
    }
}
