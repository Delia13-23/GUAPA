#include <iostream>
using namespace std;
int main(){
  int t;
  long long x,y,p;
  
  cin>>t;
  while(t){
      cin>>x;
      cin>>y;
      p=x-y;
      if(p!=1){
          cout<<"YES";
      }else{
          cout<<"NO";
      }
      cout<<"\n";
      t--;
  }
   
    
}
