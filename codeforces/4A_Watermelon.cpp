#include<iostream>
using namespace std;

int main()
{
   int weight;
   
   while(cin>>weight)
   {

   if(weight > 2 and weight%2 == 0)
       cout<<"YES"<<endl;
   else
       cout<<"NO"<<endl;
   }
    return 0;
}
