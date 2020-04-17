#include<iostream>
using namespace std;

int main(){
    
    int t;
    string frase,letra,l;
   
    cin>>t;
    getline(cin,frase);
    while(t){
        getline(cin,frase);
         
        l = frase[frase.size()-1];
        
        if(l =="o"){
            cout<<"FILIPINO";
        }else if(l =="u"){
            cout<<"JAPANESE";
        }else{
            cout<<"KOREAN";
        }
       
  cout<<"\n";  
  t--;
 }
     return 0;
}
