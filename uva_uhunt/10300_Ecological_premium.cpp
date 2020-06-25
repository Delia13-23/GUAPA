#include<stdio.h>

int main()
{
    int n,t,a,b,c;
    
    scanf("%d",&n);
    while(n--)
    {
        long long ans=0;
        scanf("%d",&t);
        for(int i=0;i<t;i++)
        {
           scanf("%d %d %d",&a,&b,&c);
            ans+=(a*c);
        }
        printf("%lld",ans);
        printf("\n");
    }
    return 0;
}
