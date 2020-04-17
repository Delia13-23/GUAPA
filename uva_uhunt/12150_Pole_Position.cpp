#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
int n,num,pos;
int i;
int vacio=0;
pair<int,int>car;
vector<pair<int,int>>vec;//aqui marca el problema.
vector<int>fin;
while(cin>>n and n!=0)
{
vec.assing(n,0);
for(i=1;i<=n;i++)
{
    cin>>num>>pos;
    vec.push_back({num,pos});
}
for(i=0;i<vec.size();i++)
{
    int a=(i+1)+vec[i].second;
    if(a<=n and 0<a)
    {
        if(fin[a]==vacio)
            fin[a]=vec[i].first;
        if else
            cout<<"-1";
            break;
        
        else
            cout<<"-1";
            break;
            
           
    }
}
for(i=0;i<vec.size;i++)
  cout<<fin[i];

}

}


