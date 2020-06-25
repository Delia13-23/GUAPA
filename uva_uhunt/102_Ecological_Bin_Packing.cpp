#include<stdio.h>
#include<limits.h>
#include<string.h>

int main()
{
    int B[3],C[3],G[3];// Hacemos un arreglo por deposito
    
    while(scanf("%d %d %d %d %d %d %d %d %d",&B[0],&G[0],&C[0],&B[1],&G[1],&C[1],&B[2],&G[2],&C[2])!= EOF)
    {
        int min=INT_MAX;
        long long sum;
        char depositos[4];
        //BCG
         sum=G[0]+C[0]+B[1]+G[1]+B[2]+C[2];
          if(sum<min)
          {
             min=sum;
             strcpy(depositos,"BCG");  
          }
        //BGC
         sum=G[0]+C[0]+B[1]+C[1]+B[2]+G[2];
         if(sum<min)
         {
             min=sum;
             strcpy(depositos,"BGC"); 
         }
        //CBG
         sum=G[0]+B[0]+G[1]+C[1]+B[2]+C[2];
         if(sum<min)
         {
             min=sum;
           strcpy(depositos,"CBG");  
         }
        //CGB
         sum=G[0]+B[0]+B[1]+C[1]+C[2]+G[2];
         if(sum<min)
         {
             min=sum;
             strcpy(depositos,"CGB"); 
         }
        //GBC
         sum=B[0]+C[0]+G[1]+C[1]+B[2]+G[2];
         if(sum<min)
         {
             min=sum;
             strcpy(depositos,"GBC");  
         }
        //GCB
         sum=B[0]+C[0]+B[1]+G[1]+C[2]+G[2];
         if(sum<min)
         {
             min=sum;
             strcpy(depositos,"GCB");  
         }
         
          printf("%s %d\n",depositos,min);
          
    }
     
   return 0;
}
