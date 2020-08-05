#include<iostream>
using namespace std;

int main()
{
    long long a,b,A,B;
    while(cin>>a>>b and ( a != 0 or b != 0))
    {
        int ans=0,c = 0;
        while(a != 0 or b != 0)
        {
        A = (a%10);
        B = (b%10);
        
        if(A+B+c >= 10)
          ans++,c = 1;
        else
            c = 0;
        
        a/=10;
        b/=10;
        
        }
        if(ans == 0)
            cout<<"No carry operation."<<endl;
        else if(ans == 1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<ans<<" carry operations."<<endl;
    }
    
    return 0;
}
