#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char tex[1024];
    bool open=true;
    int ban=0;
    while(cin.getline(tex,1024))
    {
        int l = strlen(tex);
          for(int i=0;i<l;i++)
          {
            if(tex[i]=='"')
            {
                if(open)
                    printf("``");
                else
                    printf("''");
                
                open=!open;
            }else
                printf("%c",tex[i]);
          }
         printf("\n"); 
    }
   return 0; 
}
