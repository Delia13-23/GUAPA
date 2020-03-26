#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,c,d,cont=0;
    while(cin>>n){
    int a[n];
    bool b[n-1]={false};
    for(int i=0;i<n;i++)
    {
        cin>>c;
        a[i]=c;
    }
    
    for(int i=0;i<n;i++)
    {
      d=abs(a[i]-a[i+1]);
      if((d==0) || d>n-1)
           {
            break;
           }
        for(int j=1;j<=(n-1);j++)
        {
           if(b[d]==true)
           {
            break;
           }
        b[d]=true;
        }
    }
    for(int i=1;i<=(n-1);i++)
    {
        if(b[i]==true)
        {
          cont++;
        }
    }
   
    if(cont==(n-1))
    {
        cout<<"Jolly"<<endl;
    }
    else
    {
        cout<<"Not jolly"<<endl;
    }
    
    cont=0;
 }
    
}
    
