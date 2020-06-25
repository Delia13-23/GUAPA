#include<iostream>
using namespace std;

int main()
{
    int i,j,cont=0,max,min,k;
    while(cin>>i>>j)
    {
      min = i<=j ? i:j; // si se cumple la condicion imprime i, de lo contrario, imprime j
      max = i<=j ? j:i; // si se cumple la condicion imprime j, de lo contrario, imprime i
      int max_sum=0;
      for(k=min;k<=max;k++)
      {
          cont=0;
          int aux=k;
         while(aux!=1)
         {
            if(aux%2==1)
            {
              aux=(3*aux)+1;  
            }
            else
            {
              aux=(aux/2);  
            }
            cont++;
         }
         cont++;
         if(cont>max_sum)
             max_sum=cont;
      }
      
      
      cout<<i<<" "<<j<<" "<<max_sum<<endl;
    }
    return 0;
} 
