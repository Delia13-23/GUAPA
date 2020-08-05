#include<iostream>
using namespace std;

int main()
{
    int T,N,day,dayparty,dayslose;
    cin>>T;
    while(T--)
    {
        cin>>N;
        bool h[N];
        cin>>day;
        for(int i = 1; i <= N; i++)
            h[i] = false;
    
        dayslose = 0;
        while(day--)
        {
            
            cin>>dayparty;
            
            for(int i = N; i >= dayparty ;i--)
            {
              if(i%dayparty == 0 and h[i] == false)
                {
                    int c = i+1;
                    if(c%7!=0)
                        h[i] =true,dayslose++;
                     if(i%7 == 0)
                        dayslose-=1;
                }
            }
        }
        
        cout<<dayslose<<"\n";
    }
    
    
    return 0;
}
