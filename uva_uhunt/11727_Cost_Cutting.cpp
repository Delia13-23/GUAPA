#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,c;
    int arr[3];
    cin>>t;
    int j;
    for(j=0;j<t;j++)
    {
        int i=0;
      for(i;i<3;i++)
        {
        cin>>c;
        arr[i]=c;
        }
        sort(arr,arr+3);
        cout<<"Case "<<j+1<<": "<<arr[1]<<endl;
        
    }
    
}
