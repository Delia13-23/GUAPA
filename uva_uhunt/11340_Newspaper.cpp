#include<bits/stdc++.h>
using namespace std;

int main()
{
   int N,M,K,value;
   double sum=0.0;
   string oracion;
   map<char,int>C;
   char letra;
   cin>>N;
   while(N--)
   {
       cin>>K;
       while(K--)
       {
         cin>>letra>>value;
         C[letra]=value;
       }
       cin>>M;
       getline(cin,oracion);
       for(int i=0;i<M;i++)
       {
         getline(cin,oracion); 
           for(int j=0;j<oracion.size();j++)
           {
            sum+=C[oracion[j]]; 
           }
       }
       
     sum/=100;
     printf("%.2lf$\n",sum);
     C.clear();
     sum=0;
   }
  
}
