#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s, sub;
    set<string> str;
    int n, pos;
    
    cin>>n;
    
    while(n--)
    {
      bool b=true,c=true;
      
      sub.clear();
      
      cin>>s;
      
      for(int i = 0; i < s.size() and c; ++i)
      {
        if(s[i] == '+') b=false;
        
        if(s[i] == '@')
        {
             pos = i;
             c=false;
        }
        
        if(s[i] != '.' and b and c) sub.insert(sub.end(),s[i]);
      }
      
      for(int i = pos; i<s.size(); ++i) sub.insert(sub.end(),s[i]);
    
      str.insert(sub);
      
    }
    cout<<str.size()<<'\n';
    
    //Revisar el contenido del set
    /* while(!str.empty()){
        cout<<*str.begin()<<endl;
        str.erase(str.begin());}*/
    return 0;
}