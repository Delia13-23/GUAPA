#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    while(n--){
        long long a,b;
        cin>>a>>b;
        if( a > b){
            cout<<'>'<<'\n';
        }else if( a < b ){
            cout<<'<'<<'\n';
        }else{
            cout<<'='<<'\n';
        }
    }
    
 return 0;  
}
