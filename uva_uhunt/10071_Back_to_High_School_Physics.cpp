#include<stdio.h>

int displacement(int v,int t);
int main()
{
    int v,t;
    while(scanf("%d %d",&v,&t)!= EOF)
    {
       printf("%d\n",displacement(v,t));
    }
    return 0;
}
int displacement(int v,int t)
{
    return (v*2*t);
}
