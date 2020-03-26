#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a[3],c;
    int N,D,F;
    cin >> t; 
    while(t--)
    {
        for(int i=0;i<3;i++)
        {
             cin>>c;
             a[i]=c;
            
        }
            cin>>N;
    
        sort(a,(a+3));
        F=a[2]-a[1];
        D=a[2]-a[0];
        if((F+D)<=N)
        {
            if((N-(F+D))%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        
            
        }
        else
            cout<<"NO"<<endl;
            
        
    }
    
}
