#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

typedef pair<int,int> p;
 
int main()
{
    vector<int> v;
    queue<p> Q;
    int t,jobs,pos,c;
    
    cin>>t;
    
    for(int i = 0;i < t;i++)
    {

       int count=0;
       v.clear();
       
       cin>>jobs>>pos;
       for(int i = 0; i < jobs; ++i)
       {
            cin>>c;
           Q.push(p(c,i)); 
           v.push_back(c);
           
       } 
       
       sort(v.rbegin(),v.rend());
       int j=0;
       while(!Q.empty())
       { 
           int x = Q.front().first;
           int y = Q.front().second;
           Q.pop();
             
           if(x == v[j])
            {
              count++;
                 if(y == pos) break;
                    
              j++;
            }
            else
               Q.push(p(x,y));  
          
       }
           cout<<count<<endl;
           while(!Q.empty())
                Q.pop();
    }
}
