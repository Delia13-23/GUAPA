#include <iostream>
using namespace std;
int main(){
    int t,x,y,max=0,sum=0;
    
    cin>>t;
    while(t--){
        cin>>x;
        cin>>y;
         
         sum=x+y;
         if(sum>max){
             max=sum;
             
         }
         
     
     }

    cout<<max;
}
