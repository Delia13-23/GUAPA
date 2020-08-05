#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string word;
    cin>>n;
    cin.ignore();
    while(n--)
    {
      getline(cin,word);
      int size = word.size();
      
      if(size > 10)
      {
         size -=2;
         cout<<*word.begin()<<size<<word[size+1]<<endl;
      }
      else
          cout<<word<<endl;
    }
    
    
    return 0;
}
