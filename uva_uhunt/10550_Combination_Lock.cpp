#include<iostream>
using namespace std;

void dial(int pos,int pos1, int pos2, int pos3)
{
   int a=0,b=0,c=0,r=0;
   
   if(pos > pos1)
       a = pos - pos1;
   else if(pos < pos1)
       a = 40-pos1+pos;
   if(pos1 < pos2) 
       b = pos2-pos1;
   else if(pos1 > pos2)
       b = 40 - pos1 + pos2;
   
   if(pos3 > pos2)
       c = 40 - (pos3-pos2);
   else if(pos3 < pos2)
       c = pos2-pos3;
   
   cout<<(a+b+c)*9 + 1080<<"\n";
}

int main()
{
  int pos,pos1,pos2,pos3,degrees;

  while(cin>>pos>>pos1>>pos2>>pos3)
  {
      if(pos ==0 and pos1 ==0 and pos2 ==0 and pos3 == 0 ) break;
      
      dial(pos,pos1,pos2,pos3);
  
  }
    return 0;
}
