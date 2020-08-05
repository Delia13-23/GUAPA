#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    int n;
    cin>>n;
    while(n--)
    {
        int ans = 0;
        cin>>a>>b;
        
        while(a < b)
        {
            a<<=1;//Operador de Desplazamiento
            ans+=1;
        }
        while(a > b and a%2 == 0)
        {
            a>>=1;
            ans+=1;
        }
        if(a == b)
        {
            ans=(ans+2)/3;
        }
        else
            ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}
