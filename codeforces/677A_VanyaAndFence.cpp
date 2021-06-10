#include <iostream>

using namespace std;
int main(){
    int n,a,h,count = 0;
    cin>>n>>h;
    while(n--){
      cin>> a;
      if(a <= h){
          count+=1;
      }else{
          count+=2;
      }
    }
    
    cout<<count;

    
    
 return 0;  
}
