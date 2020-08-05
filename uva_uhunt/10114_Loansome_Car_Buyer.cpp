#include<iostream>
using namespace std;

int main()
{
    int month,a,f,m;
    double p,value,p1;
    
    while(cin>>month>>p>>value>>a)
    {
        if(month<0) break;
        
        double c[101];
        
        while(a--)
        {
            cin>>m>>p1;
            for(int i = m; i < 101; ++i)
                 c[i]=p1;
        }
        int monthnow=0;
        
        double po = value/month;
        double v = ( value+p)*(1-c[0]);
        double l = value;
        
        while(v < l)
        {
            monthnow++;
            l-=po;
            v *=(1-c[monthnow]); 
        }
        
        if(monthnow == 1)
            cout<<"1 month"<<"\n";
        else
            cout<<monthnow<<" months"<<"\n";
        
    }
    
    
    
    return 0;
}
