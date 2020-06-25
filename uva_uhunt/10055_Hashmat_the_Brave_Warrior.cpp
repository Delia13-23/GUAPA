#include<stdio.h>
#include<stdlib.h>

long long difference(long long a,long long b);

int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b) != EOF)
      printf("%lld\n",difference(a,b));
    return 0;
}

long long difference(long long a, long long b)
{
    long long rest=abs(a-b);
    return rest;
}
