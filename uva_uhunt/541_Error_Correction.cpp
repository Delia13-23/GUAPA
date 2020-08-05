#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>row;vector<int>columns;
    int n,i,j,pi,pj;
    int matriz[101][101];
    while(cin>>n and n != 0)
    {
        int sum;
        row.clear(); columns.clear();
       for(i = 0; i < n; ++i)
       {
         sum = 0;
         for(j = 0; j < n; ++j)  
         {
           cin>>matriz[i][j]; 
           sum+=matriz[i][j];
         }
         if(sum%2 != 0)
             row.push_back(sum),pi=i;
       }
       
       for(j = 0; j < n; ++j)
       {
           sum = 0;
           for(i = 0; i < n; ++i)
           {
              sum+=matriz[i][j]; 
           }
           if(sum%2 != 0)
              columns.push_back(sum),pj=j;
       }
       
       
       
       if(row.size() == 0 and columns.size() == 0) 
           cout<<"OK"<<"\n";
       else if(row.size() == 1 and columns.size() == 1)
           cout<<"Change bit ("<<pi+1<<","<<pj+1<<")"<<"\n";
       else
           cout<<"Corrupt"<<"\n";
    }
    
    return 0;
}
