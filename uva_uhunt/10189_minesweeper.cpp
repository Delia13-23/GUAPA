#include<iostream>

using namespace std;

bool isMine(int x,int y,char arr[][101])
{
    if(arr[x][y]=='*')
        return (true);
    else
        return (false);
}

bool isValid(int x, int y)
{
    return(x>=0) and (y<=100) and (y>=0) and (x<=100);
}

void sumMines(int n,int m,char arr[][101])
{
     int i;
     int cont=0;
     for(i=0;i<n;i++)
     { 
         
        for(int j=0;j<m;j++)
        {
            cont=0;
            if(arr[i][j]=='*')
            {
                cout<<'*';
            }
            else
            {
             
                //-------North--------
                if(isValid(i-1,j)==true)
                {
                    if(isMine(i-1,j,arr)==true)
                        cont++;
                }
                //-------South--------
                if(isValid(i+1,j)==true)
                {
                    if(isMine(i+1,j,arr)==true)
                        cont++;
                }
                //-------East---------
                if(isValid(i,j+1)==true)
                {
                    if(isMine(i,j+1,arr)==true)
                        cont++;
                }
                //-------West---------
                if(isValid(i,j-1)==true)
                {
                    if(isMine(i,j-1,arr)==true)
                        cont++;
                }
                //-------N.E----------
                if(isValid(i-1,j+1)==true)
                {
                    if(isMine(i-1,j+1,arr)==true)
                        cont++;
                }
                //-------N.W----------
                if(isValid(i-1,j-1)==true)
                {
                    if(isMine(i-1,j-1,arr)==true)
                        cont++;
                }
                //---------S.E---------
                if(isValid(i+1,j+1)==true)
                {
                    if(isMine(i+1,j+1,arr)==true)
                        cont++;
                }
                //---------S.W---------
                if(isValid(i+1,j-1)==true)
                {
                    if(isMine(i+1,j-1,arr)==true)
                        cont++;
                }
                
                cout<<cont;
            
            }
        }
        cout<<"\n";
     }
     
     
     
}

int main()
{
    int n,m,y=0;
    char arr[101][101],c;
    cin>>n>>m;
    getchar();
    while((n and m)!=0)
    {
    
       for(int i=0;i<n;i++)
       {
          for(int j=0;j<m;j++)
                arr[i][j]=getchar();
          getchar();
       }
    
        y++;
        cout<<"Field #"<<y<<":"<<"\n";
        sumMines(n,m,arr);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]=0;
            }
        }
        
        if(cin>>n>>m and (n and m) != 0)
        {
            getchar();
            cout<<"\n";
        }
    } 
}
