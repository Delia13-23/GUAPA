#include <iostream>
using namespace std;
int main(){
     int n=0,l=0,k=0,r=0,t=0,i;
     int a[100000],b[100000];
  
   cin>>t;
   while(t){
        cin>>n;
            for(i=0;i<n;i++){
               cin>>a[i];
            }
       
            for(i=0;i<n;i++){
               cin>>b[i];
            }
       
           for(i=0;i<n;i++){
              if(a[i]!=b[i]){
                  break;
                 }
             }
        
       if(i == n) {
           cout<<"YES";
       }else{
          for(i=0;i<n;i++) {
             if(a[i]!=b[i]){
                 l=i;
                 break;
                }
             }
             
          for(i=n-1;i>=0;i--){
             if(a[i]!=b[i]){
                 r=i;
                  break;
                }
                
         }
        
        
         k=abs(b[l]-a[l]);
       
        
           for(i=l;i<=r;i++){
               a[i]+=k;
           }
        
         for(i=0;i<n;i++){
           if(a[i]!=b[i]){
               break;
           }
         }
        
         if(i==n){
             cout<<"YES";
         }else{
             cout<<"NO";
         }
       }
      
       t--;
      cout<<"\n";
   }
  
}
 
   

