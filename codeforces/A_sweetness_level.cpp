#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,k,d,sum=0,cont=0,i;
  vector<int>v;
    scanf("%d %d %d",&n,&m,&k);
    bool x[n+1];
  
  
  if(m+k>n)
  {
      printf("-1");
  }
  else
  {
       for(i=1;i<=n;i++)
         {
             x[i]=false;
         }
  
       while(m--)
       {
        scanf("%d",&d);
            for(i=1;i<=n;i++)
             {
                 x[d]=true;
             }
      }
    
        for(i=n;i>=1;i--)
        {
             if(x[i]==false)
             {
                 sum+=i;
                 v.push_back(i);
                 cont++;
                
              
                if(cont==k)
                {
                    break;
                }
            }
         
         }
     
       
        printf("%d\n",sum);
        for(i=((v.size())-1);i>=0;i--)
        {
           printf("%d\n",v[i]);
        }
    
     
  }
 return 0;   
}
